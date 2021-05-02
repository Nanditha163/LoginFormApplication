#include "widget.h"
#include "ui_widget.h"
#include<QColorDialog>
#include<QDebug>
#include<QFont>
#include<QFontDialog>
#include<QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_TEXTCOLOR_clicked()
{
  QPalette palette=ui->label->palette();
  QColor color=palette.color(QPalette::WindowText);
  QColor chosencolor=QColorDialog::getColor(color,this,"Choose text color");
  if(chosencolor.isValid())
  {
      palette.setColor(QPalette::WindowText,chosencolor);
      ui->label->setPalette(palette);
      qDebug()<<"User choosen valid color";
  }
  else
  {
      qDebug()<<"User choosen invalid color";
  }
}

void Widget::on_pushButton_BACKGROUNDCOLOR_clicked()
{
    QPalette palette=ui->label->palette();
    QColor color=palette.color(QPalette::Window);
    QColor chosencolor=QColorDialog::getColor(color,this,"Choose background color");
    if(chosencolor.isValid())
    {
        palette.setColor(QPalette::Window,chosencolor);
        ui->label->setPalette(palette);
        qDebug()<<"User choosen valid color";
    }
    else
    {
        qDebug()<<"User choosen invalid color";
    }

}

void Widget::on_pushButton_FONT_clicked()
{
    bool ok;
    QFont font=QFontDialog::getFont(&ok,QFont("Times new roman,10"),this);
    if(ok)
    {
        ui->label->setFont(font);
    }
    else
    {
      QMessageBox::information(this,"message","User can't choose font");
    }

}
