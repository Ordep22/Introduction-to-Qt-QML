#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>


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

    QMessageBox::StandardButton resp;
    /*
    The most commun messages in message box in Qt
    void            about
    void            aboutQt
    StandartButton Critical
    StandasrtButton Information
    StandasrtButton Question
    StandasrtButton Warning
    */
    //QMessageBox msgBox;

    //QMessageBox::about(this,"Qt Version","This is my custom message");
     //QMessageBox::aboutQt(this,"Qt informations");
     //QMessageBox::critical(this,"Critical error","Something went wrong!");
     //QMessageBox::information(this,"Information", "Software version 0.0.1");
     //QMessageBox::question(this, "Question", "Would you like to do this?");
     //QMessageBox::warning(this, "Warning Message","Everything is wrong");

    QMessageBox msgBox;
    msgBox.setWindowTitle("title");
    msgBox.setText("Question");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){
        QApplication::quit();

    }else {
        qDebug() << msgBox.exec();
        }
    /*
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel );
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    */

}

