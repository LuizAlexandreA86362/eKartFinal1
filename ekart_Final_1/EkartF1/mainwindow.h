#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_powerON_clicked();
    void login();


private:
    Ui::MainWindow *ui;
    SecWindow *sec;
    QSerialPort* serial;
    QString *str;
};

#endif // MAINWINDOW_H
