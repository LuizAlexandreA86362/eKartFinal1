/********************************************************************************
** Form generated from reading UI file 'secwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECWINDOW_H
#define UI_SECWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecWindow
{
public:
    QLabel *label;
    QPushButton *left_btt;
    QPushButton *right_btt;
    QPushButton *logout_btt;
    QPushButton *horn_btt;
    QPushButton *cr_btt;
    QPushButton *rever_btt;
    QLabel *distance_label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;

    void setupUi(QDialog *SecWindow)
    {
        if (SecWindow->objectName().isEmpty())
            SecWindow->setObjectName(QStringLiteral("SecWindow"));
        SecWindow->resize(525, 345);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(143, 146, 147, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        SecWindow->setPalette(palette);
        label = new QLabel(SecWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 71, 22));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        label->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("#label\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        left_btt = new QPushButton(SecWindow);
        left_btt->setObjectName(QStringLiteral("left_btt"));
        left_btt->setGeometry(QRect(20, 40, 61, 30));
        left_btt->setStyleSheet(QLatin1String("#left_btt\n"
"{\n"
"background-color: transparent;\n"
"background:none;\n"
"border:none;\n"
"background-repeat: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/grey-e.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/left.png"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QStringLiteral(":/left.png"), QSize(), QIcon::Disabled, QIcon::On);
        left_btt->setIcon(icon);
        right_btt = new QPushButton(SecWindow);
        right_btt->setObjectName(QStringLiteral("right_btt"));
        right_btt->setGeometry(QRect(90, 40, 61, 30));
        right_btt->setStyleSheet(QLatin1String("#right_btt\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:right.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat: none;\n"
"}"));
        logout_btt = new QPushButton(SecWindow);
        logout_btt->setObjectName(QStringLiteral("logout_btt"));
        logout_btt->setGeometry(QRect(460, 280, 51, 51));
        logout_btt->setStyleSheet(QLatin1String("#logout_btt\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:logout);\n"
"background:none;\n"
"border:none;\n"
"background-repeat: none;\n"
"}"));
        logout_btt->setIconSize(QSize(15, 15));
        horn_btt = new QPushButton(SecWindow);
        horn_btt->setObjectName(QStringLiteral("horn_btt"));
        horn_btt->setGeometry(QRect(260, 200, 131, 91));
        horn_btt->setStyleSheet(QLatin1String("#horn_btt\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:red.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat: none;\n"
"}"));
        cr_btt = new QPushButton(SecWindow);
        cr_btt->setObjectName(QStringLiteral("cr_btt"));
        cr_btt->setGeometry(QRect(240, 80, 171, 30));
        cr_btt->setStyleSheet(QStringLiteral(""));
        rever_btt = new QPushButton(SecWindow);
        rever_btt->setObjectName(QStringLiteral("rever_btt"));
        rever_btt->setGeometry(QRect(240, 130, 171, 30));
        rever_btt->setStyleSheet(QStringLiteral(""));
        distance_label = new QLabel(SecWindow);
        distance_label->setObjectName(QStringLiteral("distance_label"));
        distance_label->setGeometry(QRect(100, 140, 68, 22));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        distance_label->setPalette(palette2);
        label_3 = new QLabel(SecWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 140, 68, 22));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette3);
        label_3->setStyleSheet(QLatin1String("#label_3\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        label_2 = new QLabel(SecWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 81, 61));
        label_2->setStyleSheet(QLatin1String("#label_2\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/speedometer.png")));
        label_2->setScaledContents(true);
        label_4 = new QLabel(SecWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 10, 51, 51));
        label_4->setStyleSheet(QLatin1String("#label_4\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/temp.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(SecWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 210, 71, 51));
        label_5->setStyleSheet(QLatin1String("#label_5\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/distancemeter.png")));
        label_5->setScaledContents(true);
        label_7 = new QLabel(SecWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 220, 68, 22));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_7->setPalette(palette4);
        label_7->setStyleSheet(QLatin1String("#label_7\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        label_8 = new QLabel(SecWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(490, 20, 68, 22));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        label_8->setPalette(palette5);
        label_8->setStyleSheet(QLatin1String("#label_8\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        lcdNumber = new QLCDNumber(SecWindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(100, 140, 64, 23));
        lcdNumber_2 = new QLCDNumber(SecWindow);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(420, 20, 64, 23));
        lcdNumber_3 = new QLCDNumber(SecWindow);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(100, 220, 64, 23));

        retranslateUi(SecWindow);

        QMetaObject::connectSlotsByName(SecWindow);
    } // setupUi

    void retranslateUi(QDialog *SecWindow)
    {
        SecWindow->setWindowTitle(QApplication::translate("SecWindow", "eKart", nullptr));
        label->setText(QApplication::translate("SecWindow", "eKart", nullptr));
        left_btt->setText(QString());
        right_btt->setText(QString());
        logout_btt->setText(QString());
        horn_btt->setText(QApplication::translate("SecWindow", "HORN", nullptr));
        cr_btt->setText(QApplication::translate("SecWindow", "CRUISE CONTROL", nullptr));
        rever_btt->setText(QApplication::translate("SecWindow", "REVERSE", nullptr));
        distance_label->setText(QString());
        label_3->setText(QApplication::translate("SecWindow", "rpm", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_7->setText(QApplication::translate("SecWindow", "m", nullptr));
        label_8->setText(QApplication::translate("SecWindow", "\302\272C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecWindow: public Ui_SecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECWINDOW_H
