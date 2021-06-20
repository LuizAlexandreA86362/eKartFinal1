#include "secwindow.h"
#include "ui_secwindow.h"
#include <wiringPi.h>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QtSerialPort/QSerialPort>

QTimer *t1 = new QTimer(),*t2 = new QTimer(),*t3 = new QTimer(),*t4 = new QTimer(),*t5 = new QTimer();

QSerialPort* serial2;

SecWindow::SecWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode(28,OUTPUT); //left led GPIO 20
    pinMode(27,OUTPUT); //right led GPIO 16
    pinMode(5,OUTPUT); //buzzer GPIO 24

    connect(t1,SIGNAL(timeout()),this,SLOT(writePin(28))); //left timer
    connect(t2,SIGNAL(timeout()),this,SLOT(writePin(27))); //right timer
    connect(t3,SIGNAL(timeout()),this,SLOT(writePin(5)));   //buzzer


    //serial config
    serial2  = new QSerialPort(this);
    serial2->setPortName("ttyS0");
    serial2->setBaudRate(QSerialPort::Baud115200);
    serial2->setDataBits(QSerialPort::Data8);
    serial2->setParity(QSerialPort::NoParity);
    serial2->setStopBits(QSerialPort::OneStop);
    serial2->setFlowControl(QSerialPort::NoFlowControl);
    serial2->open(QIODevice::ReadWrite);


    if(serial2->isOpen()==true)
    {
        qDebug()<<"serial is open";

        connect(serial2, SIGNAL(readyRead()),this, SLOT(receivedata()));
    }

}

SecWindow::~SecWindow()
{
    delete ui;
}

void SecWindow::writePin(int x)
{
        digitalWrite(x,1);
}


void SecWindow::on_left_btt_clicked()
{
    if(t1->isActive())
    {
        t1->stop();
        digitalWrite(28,0);
        //ui->pushButton->setText("ligar buzina");
    }

    else {
        t1->start(100);
        //ui->pushButton->setText("desligar buzina");
    }
}

void SecWindow::on_right_btt_clicked()
{
    if(t2->isActive())
    {
        t2->stop();
        digitalWrite(27,0);
        //ui->pushButton->setText("ligar buzina");
    }

    else {
        t2->start(100);
        //ui->pushButton->setText("desligar buzina");
    }
}

void SecWindow::on_logout_btt_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Logout","Are you sure to logout?",QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        serial2->write("OFF");
        qDebug()<<"Logout with sucess";
        hide();
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
        serial2->write("RV_ON\n");
        qDebug()<<"Message send to rever on\n";
        ui->rever_btt->setText("REVERSE ON");
    }

    else {
        t4->start(100);
        serial2->write("RV_OFF\n");
        qDebug()<<"Message send to rever off\n";
        ui->rever_btt->setText("REVERSE OFF");
    }
}

void SecWindow::on_cr_btt_clicked()
{
    if(t5->isActive())
    {
        serial2->write("C_ON\n");
        qDebug()<<"Message send to cruise control on\n";
        ui->cr_btt->setText("CRUISE CONTROL ON");
    }

    else {
        t5->start(100);
        serial2->write("C_OFF\n");
        qDebug()<<"Message send to cruise control off\n";
        ui->cr_btt->setText("CRUISE CONTROL OFF");
    }
}
