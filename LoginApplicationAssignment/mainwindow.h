#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<logindialog.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

    void on_Cancel_clicked();

private:
    Ui::MainWindow *ui;
    loginDialog *loop;
};
#endif // MAINWINDOW_H
