/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButtonClose;
    QPushButton *pushButtonOpen;
    QLabel *labelStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(385, 389);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonClose = new QPushButton(centralwidget);
        pushButtonClose->setObjectName("pushButtonClose");
        pushButtonClose->setGeometry(QRect(10, 10, 80, 24));
        pushButtonOpen = new QPushButton(centralwidget);
        pushButtonOpen->setObjectName("pushButtonOpen");
        pushButtonOpen->setGeometry(QRect(100, 10, 80, 24));
        labelStatus = new QLabel(centralwidget);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setGeometry(QRect(10, 60, 351, 101));
        labelStatus->setCursor(QCursor(Qt::IBeamCursor));
        labelStatus->setFrameShape(QFrame::Box);
        labelStatus->setFrameShadow(QFrame::Raised);
        labelStatus->setLineWidth(2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 385, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonClose, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        labelStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
