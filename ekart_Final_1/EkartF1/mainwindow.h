#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
     void code2(QByteArray data);


private slots:
    void on_powerON_clicked();
    void code1();

private:
    Ui::MainWindow *ui;
    SecWindow *sec;
};

#endif // MAINWINDOW_H
