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


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        QMessageBox::information(this,"title","You like Apples");
    }
    else
    {
        QMessageBox::information(this,"title","You don't like Apples");
}
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"title","You clicked here and you like apples");
    }
    else
    {
        QMessageBox::information(this,"title","You clicked here and you don't like Apples");
}
}
