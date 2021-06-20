#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QMessageBox>
#include "string"

QSerialPort* serial;

int flag=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial  = new QSerialPort(this);
    serial->setPortName("ttyS0");
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);


    if(serial->isOpen()==true)
    {
        qDebug()<<"serial is open";

        connect(serial, SIGNAL(readyRead()),this, SLOT(code()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    serial->close();
}

void MainWindow::code()
{
    QByteArray ba;
    ba = serial->readAll();

    if(ba!="n\n") //cmd for login with sucess
    {

        ui->code_label_2->setText(ui->code_label_2->text()+ba);
        qDebug() << ba;
    }

    else {
        flag=1;
    }

}


void MainWindow::on_powerON_clicked()
{
     if(flag==0)    QMessageBox::critical(this,"ERROR","Please validate your code in the app");

     else {
            QMessageBox::about(this,"Sucess","Welcome to the eKart!");
            hide();
            sec =   new SecWindow(this);
            sec->show();
     }
}
