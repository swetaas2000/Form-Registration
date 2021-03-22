#ifndef SWETAA_212218104169_H
#define SWETAA_212218104169_H

#include <QMainWindow>

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
    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // SWETAA_212218104169_H
