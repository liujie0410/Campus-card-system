/********************************************************************************
** Form generated from reading UI file 'ClockInWidget.ui'
**
** Created: Tue Dec 31 21:21:08 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKINWIDGET_H
#define UI_CLOCKINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "rotatenumberlabel.h"

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLCDNumber *yearNumber;
    QLabel *label_2;
    QLCDNumber *monthNumber;
    QLabel *label_3;
    QLCDNumber *dayNumber;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *cardIdEdit;
    QLabel *label_5;
    QLineEdit *nameEdit;
    QLabel *classLabel;
    QLineEdit *classesEdit;
    QLabel *dormitoryLabel;
    QLineEdit *dormitoryEdit;
    QLabel *studentIDLabel;
    QLineEdit *studentidEdit;
    QLineEdit *stateEdit;
    QLabel *label_7;
    QPushButton *updateButton;
    RotateNumberLabel *hourLabel;
    RotateNumberLabel *minuteLabel;
    QLCDNumber *secondNumber;
    QLabel *label_6;
    QLineEdit *ifdomitoryEdit;
    QPushButton *jieguaBtn;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(568, 291);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 273, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        yearNumber = new QLCDNumber(layoutWidget);
        yearNumber->setObjectName(QString::fromUtf8("yearNumber"));
        yearNumber->setNumDigits(4);

        horizontalLayout->addWidget(yearNumber);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        monthNumber = new QLCDNumber(layoutWidget);
        monthNumber->setObjectName(QString::fromUtf8("monthNumber"));
        monthNumber->setNumDigits(2);

        horizontalLayout->addWidget(monthNumber);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        dayNumber = new QLCDNumber(layoutWidget);
        dayNumber->setObjectName(QString::fromUtf8("dayNumber"));
        dayNumber->setNumDigits(2);

        horizontalLayout->addWidget(dayNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 90, 201, 152));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        cardIdEdit = new QLineEdit(layoutWidget1);
        cardIdEdit->setObjectName(QString::fromUtf8("cardIdEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cardIdEdit);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        nameEdit = new QLineEdit(layoutWidget1);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, nameEdit);

        classLabel = new QLabel(layoutWidget1);
        classLabel->setObjectName(QString::fromUtf8("classLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, classLabel);

        classesEdit = new QLineEdit(layoutWidget1);
        classesEdit->setObjectName(QString::fromUtf8("classesEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, classesEdit);

        dormitoryLabel = new QLabel(layoutWidget1);
        dormitoryLabel->setObjectName(QString::fromUtf8("dormitoryLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dormitoryLabel);

        dormitoryEdit = new QLineEdit(layoutWidget1);
        dormitoryEdit->setObjectName(QString::fromUtf8("dormitoryEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dormitoryEdit);

        studentIDLabel = new QLabel(layoutWidget1);
        studentIDLabel->setObjectName(QString::fromUtf8("studentIDLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, studentIDLabel);

        studentidEdit = new QLineEdit(layoutWidget1);
        studentidEdit->setObjectName(QString::fromUtf8("studentidEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, studentidEdit);

        stateEdit = new QLineEdit(layoutWidget1);
        stateEdit->setObjectName(QString::fromUtf8("stateEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, stateEdit);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(430, 140, 75, 23));
        updateButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        hourLabel = new RotateNumberLabel(widget);
        hourLabel->setObjectName(QString::fromUtf8("hourLabel"));
        hourLabel->setGeometry(QRect(332, 10, 48, 45));
        hourLabel->setMinimumSize(QSize(48, 45));
        minuteLabel = new RotateNumberLabel(widget);
        minuteLabel->setObjectName(QString::fromUtf8("minuteLabel"));
        minuteLabel->setGeometry(QRect(386, 10, 48, 45));
        minuteLabel->setMinimumSize(QSize(48, 45));
        secondNumber = new QLCDNumber(widget);
        secondNumber->setObjectName(QString::fromUtf8("secondNumber"));
        secondNumber->setGeometry(QRect(440, 20, 37, 23));
        secondNumber->setMaximumSize(QSize(16777215, 24));
        secondNumber->setNumDigits(2);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 130, 141, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));
        ifdomitoryEdit = new QLineEdit(widget);
        ifdomitoryEdit->setObjectName(QString::fromUtf8("ifdomitoryEdit"));
        ifdomitoryEdit->setGeometry(QRect(30, 160, 131, 21));
        jieguaBtn = new QPushButton(widget);
        jieguaBtn->setObjectName(QString::fromUtf8("jieguaBtn"));
        jieguaBtn->setGeometry(QRect(430, 220, 75, 23));
        jieguaBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        label->setText(QApplication::translate("widget", "Today is:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("widget", "-", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("widget", "-", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("widget", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        cardIdEdit->setText(QApplication::translate("widget", "00ff7f9d", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("widget", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        classLabel->setText(QApplication::translate("widget", "\347\217\255\347\272\247\357\274\232", 0, QApplication::UnicodeUTF8));
        dormitoryLabel->setText(QApplication::translate("widget", "\345\257\235\345\256\244\346\245\274\346\240\213\357\274\232", 0, QApplication::UnicodeUTF8));
        studentIDLabel->setText(QApplication::translate("widget", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("widget", "\346\214\202\345\244\261\347\212\266\346\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        updateButton->setText(QApplication::translate("widget", "\347\241\256\350\256\244\350\277\233\345\205\245", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("widget", "\350\257\267\350\276\223\345\205\245\345\257\235\345\256\244\346\245\274\346\240\213\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        jieguaBtn->setText(QApplication::translate("widget", "\350\247\243\351\231\244\346\214\202\345\244\261", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(widget);
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKINWIDGET_H
