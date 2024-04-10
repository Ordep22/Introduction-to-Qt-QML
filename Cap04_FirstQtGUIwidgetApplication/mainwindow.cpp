#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pushButtonOpen_clicked()
{

    if (ui->labelStatus->text() != ""){

        ui->labelStatus->setText("");
        ui->labelStatus->colorCount();

    }

    else  {

        ui->labelStatus->setText("Button Open was pressed");
    }



}

