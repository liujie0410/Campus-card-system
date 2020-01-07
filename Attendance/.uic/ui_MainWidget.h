/********************************************************************************
** Form generated from reading UI file 'MainWidget.ui'
**
** Created: Tue Dec 31 21:21:08 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "ClockInWidget.h"
#include "ManageWidget.h"
#include "ShopWidget.h"
#include "readwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QTabWidget *tabWidget;
    ClockInWidget *clockInPage;
    QWidget *widget;
    ManageWidget *manPage;
    ShopWidget *shopPage;
    ReadWidget *readPage;
    QWidget *widget_2;
    QLabel *label;
    QSplitter *splitter;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *reconnectBtn;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(762, 475);
        MainWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 70, 39);"));
        tabWidget = new QTabWidget(MainWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 110, 751, 291));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";"));
        clockInPage = new ClockInWidget();
        clockInPage->setObjectName(QString::fromUtf8("clockInPage"));
        widget = new QWidget(clockInPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(550, 70, 201, 201));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/pic/marry.png);"));
        tabWidget->addTab(clockInPage, QString());
        manPage = new ManageWidget();
        manPage->setObjectName(QString::fromUtf8("manPage"));
        tabWidget->addTab(manPage, QString());
        shopPage = new ShopWidget();
        shopPage->setObjectName(QString::fromUtf8("shopPage"));
        tabWidget->addTab(shopPage, QString());
        readPage = new ReadWidget();
        readPage->setObjectName(QString::fromUtf8("readPage"));
        widget_2 = new QWidget(readPage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(550, 70, 201, 201));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/pic/marry.png);"));
        tabWidget->addTab(readPage, QString());
        label = new QLabel(MainWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 741, 101));
        label->setStyleSheet(QString::fromUtf8("image: url(:/pic/title.png);"));
        splitter = new QSplitter(MainWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(470, 430, 268, 23));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        splitter->addWidget(label_2);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        splitter->addWidget(lineEdit);
        reconnectBtn = new QPushButton(splitter);
        reconnectBtn->setObjectName(QString::fromUtf8("reconnectBtn"));
        reconnectBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        splitter->addWidget(reconnectBtn);
        label_3 = new QLabel(MainWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 410, 71, 51));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/pic/flower.png);"));
        label_4 = new QLabel(MainWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 440, 31, 31));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/pic/flower.png);"));
        label_5 = new QLabel(MainWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 110, 31, 21));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/pic/flower.png);"));
        label_6 = new QLabel(MainWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(550, 90, 41, 31));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/pic/flower.png);"));

        retranslateUi(MainWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(clockInPage), QApplication::translate("MainWidget", "\345\210\267\345\215\241", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(manPage), QApplication::translate("MainWidget", "\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(shopPage), QApplication::translate("MainWidget", "\346\266\210\350\264\271", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(readPage), QApplication::translate("MainWidget", "\351\230\205\350\247\210\350\256\241\350\264\271", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWidget", "DB Server:", 0, QApplication::UnicodeUTF8));
        reconnectBtn->setText(QApplication::translate("MainWidget", "Reconnect", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
