#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QApplication"
//#include "secdialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


    /*
    SecDialog Secd;
    Secd.setModal(true);
    Secd.exec();
    */
    hide();
    secDialog = new SecDialog(this);
    secDialog->show();

}


void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();

}

