/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *ekart_logo;
    QLabel *code_label;
    QPushButton *powerON;
    QLabel *code_label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(417, 324);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ekart_logo = new QLabel(centralWidget);
        ekart_logo->setObjectName(QStringLiteral("ekart_logo"));
        ekart_logo->setGeometry(QRect(140, 0, 111, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(143, 146, 147, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ekart_logo->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferDefault);
        ekart_logo->setFont(font);
        ekart_logo->setStyleSheet(QLatin1String("#ekart_logo\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        ekart_logo->setAlignment(Qt::AlignCenter);
        code_label = new QLabel(centralWidget);
        code_label->setObjectName(QStringLiteral("code_label"));
        code_label->setGeometry(QRect(140, 70, 131, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        code_label->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(14);
        code_label->setFont(font1);
        code_label->setStyleSheet(QLatin1String("#code_label\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        powerON = new QPushButton(centralWidget);
        powerON->setObjectName(QStringLiteral("powerON"));
        powerON->setGeometry(QRect(150, 190, 111, 81));
        powerON->setStyleSheet(QLatin1String("#powerON\n"
"{\n"
"background-color: transparent;\n"
"border-image: url(:power.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat: none;\n"
"}"));
        code_label_2 = new QLabel(centralWidget);
        code_label_2->setObjectName(QStringLiteral("code_label_2"));
        code_label_2->setGeometry(QRect(150, 100, 111, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        code_label_2->setPalette(palette2);
        QFont font2;
        font2.setFamily(QStringLiteral("Serif"));
        font2.setPointSize(20);
        code_label_2->setFont(font2);
        code_label_2->setStyleSheet(QLatin1String("#code_label\n"
"{\n"
"	background-color: transparent;\n"
"	background: none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 417, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "eKart", nullptr));
        ekart_logo->setText(QApplication::translate("MainWindow", "eKart", nullptr));
        code_label->setText(QApplication::translate("MainWindow", "Your code is:", nullptr));
        powerON->setText(QString());
        code_label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
