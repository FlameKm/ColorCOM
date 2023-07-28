//
// Created by FlameKm on 2022/10/20.
//
//https://blog.csdn.net/CSDNZSX/article/details/89335600
// You may need to build the project (run Qt uic code generator) to get "ui_mainwindow.h" resolved

#include <QMessageBox>
#include <qarraydata.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    recBuf = "";
    /*统计*/
    numTX = 0;
    numRX = 0;
    // *uart init
    Serial.setPortName("COM7");                 //设置端口号
    Serial.setBaudRate(115200);              //设置波特率
    Serial.setDataBits(QSerialPort::Data8);           //设置数据位
    Serial.setStopBits(QSerialPort::OneStop);         //设置停止位
    Serial.setParity(QSerialPort::NoParity);          //设置奇偶校验
    Serial.setFlowControl(QSerialPort::NoFlowControl);//设置流控制模式

    // *注册串口
    connect(&Serial, &QSerialPort::readyRead, this, &MainWindow::serialRead);
    recBuf = "";
    // *ui init
    ui->baudBox->addItem("9600");
    ui->baudBox->addItem("115200");
    ui->baudBox->setCurrentText("115200");

    ui->stopBitBox->addItem("1");
    ui->stopBitBox->addItem("2");
    ui->stopBitBox->setCurrentText("1");

    ui->dataBitBox->addItem("8");
    ui->dataBitBox->addItem("7");
    ui->dataBitBox->addItem("6");
    ui->dataBitBox->addItem("5");
    ui->dataBitBox->setCurrentText("8");

    ui->debugLevelBox->addItem("verbose");
    ui->debugLevelBox->addItem("debug");
    ui->debugLevelBox->addItem("info");
    ui->debugLevelBox->addItem("error");
    ui->debugLevelBox->addItem("warning");
    ui->debugLevelBox->setCurrentText("debug");
    ui->debugBox->setChecked(true);
    ui->newlineBox->setChecked(true);

    /*!YaHei Consolas Hybrid是自己安装的字体*/
    ui->receiveText->setFont(QFont("YaHei Consolas Hybrid", 10, QFont::Normal));

    QPalette pal = ui->receiveText->palette();
    pal.setBrush(QPalette::Base, Qt::black);
    ui->receiveText->setPalette(pal);
    ui->receiveText->setReadOnly(false);
    ui->receiveText->setTextColor(Qt::white);
    /*对应日志输出颜色*/
    colorVerbose.setRgb(0xff, 0xff, 0x55);
    colorInfo.setRgb(0x00, 0xcc, 0x20);
    colorError.setRgb(0xff, 0x00, 0x00);
    colorDebug.setRgb(0x00, 0xdd, 0xff);
    colorWarn.setRgb(0xcc, 0xcc, 0x00);
    colorEmpty.setRgb(0xaa, 0xaa, 0x00);
    /*用于显示光标移到末尾*/
    cursor = ui->receiveText->textCursor();
    cursor.movePosition(QTextCursor::End);

    //  优先级
    levelMap[QString("verbose")] = 5;
    levelMap[QString("debug")] = 4;
    levelMap[QString("info")] = 3;
    levelMap[QString("error")] = 2;
    levelMap[QString("warning")] = 1;

    // *槽
    on_checkBtn_clicked();
    on_openUartBtn_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::serialRead()
{
    QByteArray buffer;
    ui->receiveText->setTextCursor(cursor);
    /*如果开启debug模式*/
    if (ui->debugBox->isChecked()) {
        buffer = Serial.readAll();
        numRX += buffer.size();
        recBuf.append(buffer);
        /*未接收到换行符不显示*/
        if (recBuf.contains("\r\n")) {
            int level = 0;
            /*设置颜色*/
            if (recBuf.contains("verbose")) {
                level = 5;
                ui->receiveText->setTextColor(colorVerbose);
            }
            else if (recBuf.contains("debug")) {
                level = 4;
                ui->receiveText->setTextColor(colorDebug);
            }
            else if (recBuf.contains("info")) {
                level = 3;
                ui->receiveText->setTextColor(colorInfo);
            }
            else if (recBuf.contains("err")) {
                level = 2;
                ui->receiveText->setTextColor(colorError);
            }
            else if (recBuf.contains("war")) {
                level = 1;
                ui->receiveText->setTextColor(colorWarn);
            }
            else {
                ui->receiveText->setTextColor(colorEmpty);
            }
            /*满足输出条件才输出*/
            if (level <= levelMap[ui->debugLevelBox->currentText()]) {
                /*支持中文显示*/
                ui->receiveText->insertPlainText(QString::fromLocal8Bit(recBuf));
                //ui->receiveText->insertPlainText(recBuf);
            }
            recBuf.clear();
        }
    }
    else {
        buffer = Serial.readLine();
        if (ui->show16Box->isChecked()) {
            buffer = buffer.toHex();
        }
        numRX += buffer.size();
        ui->receiveText->setTextColor(colorEmpty);
        ui->receiveText->insertPlainText(QString::fromLocal8Bit(buffer)
        );
    }
    /*记录数据*/
    QString strTxLabel = "RX:";
    strTxLabel.append(QString::number(numRX));

    ui->rxLabel->setText(strTxLabel);
    /*显示最新消息*/
    ui->receiveText->moveCursor(QTextCursor::End);
}

void MainWindow::on_sendBtn_clicked()
{
    if (!Serial.isOpen()) {//判断串口是否正常打开
        QMessageBox::warning(nullptr, "提示", "请打开串口！");
        return;
    }
    //toPlainText() 转换为纯文本格式
    //toUtf8() 转换为UTF-8 编码
    QByteArray sendData = ui->sendEdit->toPlainText().toUtf8();

    //勾选了16进制发送
    if (ui->send16Box->isChecked()) {
        //判断是否有非16进制字符
        int cnt = (int) sendData.size();  //要发送数据的长度
        char *data = sendData.data();
        for (int i = 0; i < cnt; i++) { //判断是否有非16进制字符
            if (data[i] >= '0' && (data[i] <= '9')) {
                continue;
            }
            else if (data[i] >= 'a' && (data[i] <= 'f')) {
                continue;
            }
            else if (data[i] >= 'A' && (data[i] <= 'F')) {
                continue;
            }
            else if (data[i] == ' ') {     //输入为空格
                continue;
            }
            else {
                QMessageBox::warning(nullptr, "提示", "输入非16进制字符！");
                return;
            }
        }
        //字符串转化为16进制数   "1234" --> 0X1234
        //转换时会自动除去非16进制字符
        sendData = QByteArray::fromHex(sendData);
    }
    //勾选了发送新行
    if (ui->newlineBox->isChecked()) {
        int cnt = (int) sendData.size();
        sendData = sendData.insert(cnt, "\r\n"); //插入回车换行符
    }
    /*记录发送数量数据*/
    numTX += sendData.size();
    QString str = "TX:";
    str.append(QString::number(numTX));
    ui->txLabel->setText(str);
    /*发送*/
    Serial.write(sendData); //通过串口发送数据
}

void MainWindow::on_checkBtn_clicked()
{
    // 清除当前显示的端口号
    ui->comBox->clear();
    //检索端口号
    for (const auto& info: QSerialPortInfo::availablePorts()) {
        ui->comBox->addItem(info.portName());
    }
}

void MainWindow::on_openUartBtn_clicked()
{
    if (ui->openUartBtn->text() == QString("打开串口")) {  //串口未打开
        //设置端口号F
        Serial.setPortName(ui->comBox->currentText());
        //设置波特率
        Serial.setBaudRate(ui->baudBox->currentText().toInt());
        //设置数据位
        switch (ui->dataBitBox->currentText().toInt()) {
            case 8:
                Serial.setDataBits(QSerialPort::Data8);
                break;
            case 7:
                Serial.setDataBits(QSerialPort::Data7);
                break;
            case 6:
                Serial.setDataBits(QSerialPort::Data6);
                break;
            case 5:
                Serial.setDataBits(QSerialPort::Data5);
                break;
            default:
                break;
        }
        //设置停止位
        switch (ui->stopBitBox->currentText().toInt()) {
            case 1:
                Serial.setStopBits(QSerialPort::OneStop);
                break;
            case 2:
                Serial.setStopBits(QSerialPort::TwoStop);
                break;
            default:
                break;
        }
        //设置校验方式
        switch (ui->cheakOutBox->currentIndex()) {
            case 0:
                Serial.setParity(QSerialPort::NoParity);
                break;
            default:
                break;
        }
        //设置流控制模式
        Serial.setFlowControl(QSerialPort::NoFlowControl);
        //打开串口
        if (!Serial.open(QIODevice::ReadWrite)) {
            QMessageBox::warning(nullptr, "提示", "串口打开失败！");
            return;
        }
        // 失能串口设置控件
        ui->comBox->setEnabled(false);
        ui->cheakOutBox->setEnabled(false);
        ui->baudBox->setEnabled(false);
        ui->dataBitBox->setEnabled(false);
        ui->stopBitBox->setEnabled(false);
        ui->checkBtn->setEnabled(false);
        //调整串口控制按钮的文字提示
        ui->openUartBtn->setText(QString("关闭串口"));
    }
    else { //串口已经打开
        Serial.close();
        // 使能串口设置控件
        ui->comBox->setEnabled(true);
        ui->cheakOutBox->setEnabled(true);
        ui->baudBox->setEnabled(true);
        ui->dataBitBox->setEnabled(true);
        ui->stopBitBox->setEnabled(true);
        ui->checkBtn->setEnabled(true);
        //调整串口控制按钮的文字提示
        ui->openUartBtn->setText(QString("打开串口"));
    }

}

void MainWindow::on_clrRecBtn_clicked()
{
    ui->receiveText->clear();
    numRX = 0;
    numTX = 0;
    ui->txLabel->setText("TX:0");
    ui->rxLabel->setText("RX:0");
}