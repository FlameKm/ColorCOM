//
// Created by FlameKm on 2022/10/20.
//

#ifndef USARTTOOL_FOR_CLION_MAINWINDOW_H
#define USARTTOOL_FOR_CLION_MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow: public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

    QSerialPort Serial;

private slots:

    void on_sendBtn_clicked();
    void on_checkBtn_clicked();
    void on_openUsartBtn_clicked();
    void on_clrRecBtn_clicked();
private:
    QTextCursor cursor;
    Ui::MainWindow *ui;
    std::map<QString, int> levelMap;
    QByteArray recBuf;

    QColor colorVerbose;
    QColor colorDebug;
    QColor colorError;
    QColor colorInfo;
    QColor colorWarn;
    QColor colorEmpty;
    long long numTX;
    long long numRX;

    void serialRead();
};


#endif //USARTTOOL_FOR_CLION_MAINWINDOW_H