/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton11;
    QPushButton *pushButton02;
    QPushButton *pushButton12;
    QPushButton *pushButton00;
    QPushButton *pushButton01;
    QPushButton *pushButton10;
    QPushButton *pushButton20;
    QPushButton *pushButton21;
    QPushButton *pushButton22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(724, 537);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(30, 50, 641, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton11 = new QPushButton(gridLayoutWidget);
        pushButton11->setObjectName("pushButton11");
        sizePolicy.setHeightForWidth(pushButton11->sizePolicy().hasHeightForWidth());
        pushButton11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton11, 2, 2, 1, 1);

        pushButton02 = new QPushButton(gridLayoutWidget);
        pushButton02->setObjectName("pushButton02");
        sizePolicy.setHeightForWidth(pushButton02->sizePolicy().hasHeightForWidth());
        pushButton02->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton02, 0, 4, 1, 1);

        pushButton12 = new QPushButton(gridLayoutWidget);
        pushButton12->setObjectName("pushButton12");
        sizePolicy.setHeightForWidth(pushButton12->sizePolicy().hasHeightForWidth());
        pushButton12->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton12, 2, 4, 1, 1);

        pushButton00 = new QPushButton(gridLayoutWidget);
        pushButton00->setObjectName("pushButton00");
        sizePolicy.setHeightForWidth(pushButton00->sizePolicy().hasHeightForWidth());
        pushButton00->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton00, 0, 0, 1, 1);

        pushButton01 = new QPushButton(gridLayoutWidget);
        pushButton01->setObjectName("pushButton01");
        sizePolicy.setHeightForWidth(pushButton01->sizePolicy().hasHeightForWidth());
        pushButton01->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton01, 0, 2, 1, 1);

        pushButton10 = new QPushButton(gridLayoutWidget);
        pushButton10->setObjectName("pushButton10");
        sizePolicy.setHeightForWidth(pushButton10->sizePolicy().hasHeightForWidth());
        pushButton10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton10, 2, 0, 1, 1);

        pushButton20 = new QPushButton(gridLayoutWidget);
        pushButton20->setObjectName("pushButton20");
        sizePolicy.setHeightForWidth(pushButton20->sizePolicy().hasHeightForWidth());
        pushButton20->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton20, 5, 0, 1, 1);

        pushButton21 = new QPushButton(gridLayoutWidget);
        pushButton21->setObjectName("pushButton21");
        sizePolicy.setHeightForWidth(pushButton21->sizePolicy().hasHeightForWidth());
        pushButton21->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton21, 5, 2, 1, 1);

        pushButton22 = new QPushButton(gridLayoutWidget);
        pushButton22->setObjectName("pushButton22");
        sizePolicy.setHeightForWidth(pushButton22->sizePolicy().hasHeightForWidth());
        pushButton22->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton22, 5, 4, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 724, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton11->setText(QString());
        pushButton02->setText(QString());
        pushButton12->setText(QString());
        pushButton00->setText(QString());
        pushButton01->setText(QString());
        pushButton10->setText(QString());
        pushButton20->setText(QString());
        pushButton21->setText(QString());
        pushButton22->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
