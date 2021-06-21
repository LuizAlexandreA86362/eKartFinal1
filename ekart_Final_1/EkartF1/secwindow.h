#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QString>

namespace Ui {
class SecWindow;
}

class SecWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecWindow(QSerialPort* serial = nullptr, QWidget *parent = nullptr);
    ~SecWindow();


private slots:
    void on_left_btt_clicked();

    void on_logout_btt_clicked();

    void on_horn_btt_clicked();

    void on_rever_btt_clicked();

    void on_cr_btt_clicked();
    void buzz();
    void right();
    void left();

    void on_right_btt_clicked();
    void receivedata();

private:
    Ui::SecWindow *ui;
    QSerialPort* serial;
    QString* str;

};

#endif // SECWINDOW_H
