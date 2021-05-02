#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
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
    QString Username=ui->lineEdit_Username->text();
    QString Password=ui->lineEdit_Password->text();
    if(!(Username=="text"&&Password=="text"))
    {
        QMessageBox::information(this,"Login","Username and Password are correct");
        loop=new secDialog(this);
        loop->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","Username and Password are incorrect");

    }


}
