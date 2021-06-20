#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QDialog>


namespace Ui {
class SecWindow;
}

class SecWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecWindow(QWidget *parent = nullptr);
    ~SecWindow();

public:


private slots:
    void on_left_btt_clicked();

    void on_right_btt_clicked();
    void writePin(int);

    void on_logout_btt_clicked();

    void on_horn_btt_clicked();

    void on_rever_btt_clicked();

    void on_cr_btt_clicked();

private:
    Ui::SecWindow *ui;

};

#endif // SECWINDOW_H
