#include "secwindow.h"
#include "ui_secwindow.h"
#include <wiringPi.h>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QtSerialPort/QSerialPort>

QTimer *t1 = new QTimer(),*t2 = new QTimer(),*t3 = new QTimer(),*t4 = new QTimer(),*t5 = new QTimer();

SecWindow::SecWindow(QSerialPort* serial, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode(28,OUTPUT); //left led GPIO 20
    pinMode(27,OUTPUT); //right led GPIO 16
    pinMode(5,OUTPUT); //buzzer GPIO 24

    connect(t1,SIGNAL(timeout()),this,SLOT(left())); //left timer
    connect(t2,SIGNAL(timeout()),this,SLOT(right())); //right timer
    connect(t3,SIGNAL(timeout()),this,SLOT(buzz()));   //buzzer

    //serial config
    this->serial=serial;

    receivedata();

}

SecWindow::~SecWindow()
{
    delete ui;
   // serial->close();
}


void SecWindow::buzz()
{
        digitalWrite(5,1);
}

void SecWindow::left()
{
        digitalWrite(28,1);
        delay(500);
         digitalWrite(28,0);
          delay(500);
}

void SecWindow::right()
{
        digitalWrite(27,1);
        delay(500);
         digitalWrite(27,0);
          delay(500);
}



void SecWindow::on_left_btt_clicked()
{
    if(t1->isActive())
    {
        t1->stop();
        digitalWrite(28,0);
    }

    else {
        t1->start(100);
    }
}

void SecWindow::receivedata()
{
    QByteArray ba;
    ba = serial->readAll();

    QString str = QString::fromUtf8(ba);
    ui->label_6->setText(str );

}


void SecWindow::on_right_btt_clicked()
{
    if(t2->isActive())
    {
        t2->stop();
        digitalWrite(27,0);
    }

    else t2->start(100);

}

void SecWindow::on_logout_btt_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout","Are you sure to logout?",QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        serial->write("OFF");
        qDebug()<<"Logout with sucess";
        close();
    }
}

void SecWindow::on_horn_btt_clicked()
{
    if(t3->isActive())
    {
        t3->stop();
        digitalWrite(5,0);
        ui->horn_btt->setText("ON");
    }

    else {
        t3->start(100);
        ui->horn_btt->setText("OFF");
    }
}

void SecWindow::on_rever_btt_clicked()
{
    if(t4->isActive())
    {
        t4->stop();
        serial->write("RV_ON\n");
        qDebug()<<"Message send to rever on\n";
        ui->rever_btt->setText("REVERSE ON");
    }

    else {
        t4->start(100);
        serial->write("RV_OFF\n");
        qDebug()<<"Message send to rever off\n";
        ui->rever_btt->setText("REVERSE OFF");
    }
}

void SecWindow::on_cr_btt_clicked()
{
    if(t5->isActive())
    {
        serial->write("C_ON\n");
        qDebug()<<"Message send to cruise control on\n";
        ui->cr_btt->setText("CRUISE CONTROL ON");
    }

    else {
        t5->start(100);
        serial->write("C_OFF\n");
        qDebug()<<"Message send to cruise control off\n";
        ui->cr_btt->setText("CRUISE CONTROL OFF");
    }
}

