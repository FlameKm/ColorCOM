/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QTextEdit *sendEdit;
    QGridLayout *gridLayout_2;
    QCheckBox *send16Box;
    QCheckBox *newlineBox;
    QPushButton *sendBtn;
    QTextBrowser *receiveText;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *checkBtn;
    QComboBox *cheakOutBox;
    QComboBox *dataBitBox;
    QComboBox *baudBox;
    QPushButton *openUartBtn;
    QLabel *label_4;
    QComboBox *stopBitBox;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QComboBox *comBox;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_3;
    QComboBox *debugLevelBox;
    QPushButton *clrRecBtn;
    QLabel *label_6;
    QCheckBox *debugBox;
    QCheckBox *show16Box;
    QLabel *rxLabel;
    QLabel *txLabel;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(730, 562);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        sendEdit = new QTextEdit(centralwidget);
        sendEdit->setObjectName("sendEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sendEdit->sizePolicy().hasHeightForWidth());
        sendEdit->setSizePolicy(sizePolicy1);
        sendEdit->setMinimumSize(QSize(350, 90));
        sendEdit->setMaximumSize(QSize(16777215, 90));

        horizontalLayout->addWidget(sendEdit);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        send16Box = new QCheckBox(centralwidget);
        send16Box->setObjectName("send16Box");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(send16Box->sizePolicy().hasHeightForWidth());
        send16Box->setSizePolicy(sizePolicy2);
        send16Box->setMinimumSize(QSize(80, 30));
        send16Box->setMaximumSize(QSize(80, 30));

        gridLayout_2->addWidget(send16Box, 0, 0, 1, 1);

        newlineBox = new QCheckBox(centralwidget);
        newlineBox->setObjectName("newlineBox");
        sizePolicy2.setHeightForWidth(newlineBox->sizePolicy().hasHeightForWidth());
        newlineBox->setSizePolicy(sizePolicy2);
        newlineBox->setMinimumSize(QSize(80, 30));
        newlineBox->setMaximumSize(QSize(80, 30));

        gridLayout_2->addWidget(newlineBox, 1, 0, 1, 1);

        sendBtn = new QPushButton(centralwidget);
        sendBtn->setObjectName("sendBtn");
        sizePolicy2.setHeightForWidth(sendBtn->sizePolicy().hasHeightForWidth());
        sendBtn->setSizePolicy(sizePolicy2);
        sendBtn->setMinimumSize(QSize(80, 50));
        sendBtn->setMaximumSize(QSize(80, 50));

        gridLayout_2->addWidget(sendBtn, 0, 1, 2, 1);


        horizontalLayout->addLayout(gridLayout_2);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 2);

        receiveText = new QTextBrowser(centralwidget);
        receiveText->setObjectName("receiveText");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(receiveText->sizePolicy().hasHeightForWidth());
        receiveText->setSizePolicy(sizePolicy3);
        receiveText->setMinimumSize(QSize(350, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("YaHei Consolas Hybrid")});
        receiveText->setFont(font);

        gridLayout_4->addWidget(receiveText, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(80, 30));
        label_2->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        checkBtn = new QPushButton(centralwidget);
        checkBtn->setObjectName("checkBtn");
        sizePolicy2.setHeightForWidth(checkBtn->sizePolicy().hasHeightForWidth());
        checkBtn->setSizePolicy(sizePolicy2);
        checkBtn->setMinimumSize(QSize(80, 30));
        checkBtn->setMaximumSize(QSize(80, 30));
        checkBtn->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(checkBtn, 0, 0, 1, 1);

        cheakOutBox = new QComboBox(centralwidget);
        cheakOutBox->setObjectName("cheakOutBox");
        sizePolicy2.setHeightForWidth(cheakOutBox->sizePolicy().hasHeightForWidth());
        cheakOutBox->setSizePolicy(sizePolicy2);
        cheakOutBox->setMinimumSize(QSize(80, 30));
        cheakOutBox->setMaximumSize(QSize(80, 30));
        cheakOutBox->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout->addWidget(cheakOutBox, 5, 1, 1, 1);

        dataBitBox = new QComboBox(centralwidget);
        dataBitBox->setObjectName("dataBitBox");
        sizePolicy2.setHeightForWidth(dataBitBox->sizePolicy().hasHeightForWidth());
        dataBitBox->setSizePolicy(sizePolicy2);
        dataBitBox->setMinimumSize(QSize(80, 30));
        dataBitBox->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(dataBitBox, 4, 1, 1, 1);

        baudBox = new QComboBox(centralwidget);
        baudBox->setObjectName("baudBox");
        sizePolicy2.setHeightForWidth(baudBox->sizePolicy().hasHeightForWidth());
        baudBox->setSizePolicy(sizePolicy2);
        baudBox->setMinimumSize(QSize(80, 30));
        baudBox->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(baudBox, 2, 1, 1, 1);

        openUartBtn = new QPushButton(centralwidget);
        openUartBtn->setObjectName("openUartBtn");
        sizePolicy2.setHeightForWidth(openUartBtn->sizePolicy().hasHeightForWidth());
        openUartBtn->setSizePolicy(sizePolicy2);
        openUartBtn->setMinimumSize(QSize(80, 30));
        openUartBtn->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(openUartBtn, 7, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(80, 30));
        label_4->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        stopBitBox = new QComboBox(centralwidget);
        stopBitBox->setObjectName("stopBitBox");
        sizePolicy2.setHeightForWidth(stopBitBox->sizePolicy().hasHeightForWidth());
        stopBitBox->setSizePolicy(sizePolicy2);
        stopBitBox->setMinimumSize(QSize(80, 30));
        stopBitBox->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(stopBitBox, 3, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(80, 30));
        label_5->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(80, 30));
        label_3->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(80, 30));
        label->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        comBox = new QComboBox(centralwidget);
        comBox->setObjectName("comBox");
        sizePolicy2.setHeightForWidth(comBox->sizePolicy().hasHeightForWidth());
        comBox->setSizePolicy(sizePolicy2);
        comBox->setMinimumSize(QSize(80, 30));
        comBox->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(comBox, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        debugLevelBox = new QComboBox(centralwidget);
        debugLevelBox->setObjectName("debugLevelBox");
        sizePolicy2.setHeightForWidth(debugLevelBox->sizePolicy().hasHeightForWidth());
        debugLevelBox->setSizePolicy(sizePolicy2);
        debugLevelBox->setMinimumSize(QSize(80, 30));
        debugLevelBox->setMaximumSize(QSize(80, 30));

        gridLayout_3->addWidget(debugLevelBox, 3, 1, 1, 1);

        clrRecBtn = new QPushButton(centralwidget);
        clrRecBtn->setObjectName("clrRecBtn");
        clrRecBtn->setEnabled(true);
        sizePolicy2.setHeightForWidth(clrRecBtn->sizePolicy().hasHeightForWidth());
        clrRecBtn->setSizePolicy(sizePolicy2);
        clrRecBtn->setMinimumSize(QSize(80, 60));
        clrRecBtn->setMaximumSize(QSize(80, 60));
        clrRecBtn->setIconSize(QSize(16, 20));

        gridLayout_3->addWidget(clrRecBtn, 0, 1, 3, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(80, 30));
        label_6->setMaximumSize(QSize(80, 30));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        debugBox = new QCheckBox(centralwidget);
        debugBox->setObjectName("debugBox");
        sizePolicy2.setHeightForWidth(debugBox->sizePolicy().hasHeightForWidth());
        debugBox->setSizePolicy(sizePolicy2);
        debugBox->setMinimumSize(QSize(80, 30));
        debugBox->setMaximumSize(QSize(80, 30));

        gridLayout_3->addWidget(debugBox, 1, 0, 1, 1);

        show16Box = new QCheckBox(centralwidget);
        show16Box->setObjectName("show16Box");
        sizePolicy2.setHeightForWidth(show16Box->sizePolicy().hasHeightForWidth());
        show16Box->setSizePolicy(sizePolicy2);
        show16Box->setMinimumSize(QSize(80, 30));
        show16Box->setMaximumSize(QSize(80, 30));

        gridLayout_3->addWidget(show16Box, 2, 0, 1, 1);

        rxLabel = new QLabel(centralwidget);
        rxLabel->setObjectName("rxLabel");
        sizePolicy2.setHeightForWidth(rxLabel->sizePolicy().hasHeightForWidth());
        rxLabel->setSizePolicy(sizePolicy2);
        rxLabel->setMinimumSize(QSize(80, 30));
        rxLabel->setMaximumSize(QSize(80, 30));

        gridLayout_3->addWidget(rxLabel, 4, 0, 1, 1);

        txLabel = new QLabel(centralwidget);
        txLabel->setObjectName("txLabel");
        sizePolicy2.setHeightForWidth(txLabel->sizePolicy().hasHeightForWidth());
        txLabel->setSizePolicy(sizePolicy2);
        txLabel->setMinimumSize(QSize(80, 30));
        txLabel->setMaximumSize(QSize(80, 30));

        gridLayout_3->addWidget(txLabel, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        verticalSpacer = new QSpacerItem(20, 499, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(1, 1);

        gridLayout_4->addLayout(verticalLayout, 0, 1, 2, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 730, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(tooltip)
        send16Box->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        newlineBox->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        sendBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        checkBtn->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\346\243\200\346\265\213", nullptr));
        cheakOutBox->setCurrentText(QString());
        cheakOutBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));
        dataBitBox->setPlaceholderText(QString());
        baudBox->setCurrentText(QString());
        baudBox->setPlaceholderText(QString());
        openUartBtn->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        stopBitBox->setPlaceholderText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        debugLevelBox->setPlaceholderText(QString());
        clrRecBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "debug level", nullptr));
        debugBox->setText(QCoreApplication::translate("MainWindow", "debug", nullptr));
        show16Box->setText(QCoreApplication::translate("MainWindow", "16bit", nullptr));
        rxLabel->setText(QCoreApplication::translate("MainWindow", "RX:0", nullptr));
        txLabel->setText(QCoreApplication::translate("MainWindow", "TX:0", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
