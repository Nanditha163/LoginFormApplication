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


void MainWindow::on_pushButton_Login_clicked()
{
    QString Username=ui->lineEdit_Username->text();
    QString Password=ui->lineEdit_Password->text();
    if(!(Username=="text"&&Password=="text"))
    {
        QMessageBox::information(this,"Login","Username and Password are correct");
        loop=new loginDialog(this);
        loop->show();
        ui->statusbar->showMessage("App will be killed within 5 sec",5000);
    }
    else
    {
        QMessageBox::warning(this,"Login","Username and Password are incorrect");

    }
}

void MainWindow::on_Cancel_clicked()
{
    exit(1);
}
