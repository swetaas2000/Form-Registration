#include "swetaa_212218104169.h"
#include "ui_mainwindow.h"
#include "secdialog.h"
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
void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}

void MainWindow::on_pushButton_clicked()
{
    SecDialog secDeialog;
    secDeialog.setModal(true);
    secDeialog.exec();
}
