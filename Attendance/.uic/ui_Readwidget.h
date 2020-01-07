/********************************************************************************
** Form generated from reading UI file 'Readwidget.ui'
**
** Created: Tue Dec 31 21:23:40 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READWIDGET_H
#define UI_READWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReadWidget
{
public:
    QLabel *label_3;
    QLineEdit *classesEdit;
    QLineEdit *studentidEdit;
    QLineEdit *nameEdit;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_2;
    QLineEdit *moneyEdit;
    QLineEdit *cardIdEdit;
    QLabel *label_5;
    QLineEdit *readstateEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *timeEdit;
    QPushButton *enterBtn;
    QPushButton *outBtn;

    void setupUi(QDialog *ReadWidget)
    {
        if (ReadWidget->objectName().isEmpty())
            ReadWidget->setObjectName(QString::fromUtf8("ReadWidget"));
        ReadWidget->resize(545, 276);
        label_3 = new QLabel(ReadWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 130, 31, 21));
        classesEdit = new QLineEdit(ReadWidget);
        classesEdit->setObjectName(QString::fromUtf8("classesEdit"));
        classesEdit->setGeometry(QRect(360, 130, 113, 20));
        studentidEdit = new QLineEdit(ReadWidget);
        studentidEdit->setObjectName(QString::fromUtf8("studentidEdit"));
        studentidEdit->setGeometry(QRect(360, 170, 113, 20));
        nameEdit = new QLineEdit(ReadWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(360, 90, 113, 20));
        label = new QLabel(ReadWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 50, 31, 21));
        label_4 = new QLabel(ReadWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 170, 31, 21));
        label_10 = new QLabel(ReadWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 210, 31, 21));
        label_2 = new QLabel(ReadWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 90, 31, 21));
        moneyEdit = new QLineEdit(ReadWidget);
        moneyEdit->setObjectName(QString::fromUtf8("moneyEdit"));
        moneyEdit->setGeometry(QRect(360, 210, 113, 20));
        cardIdEdit = new QLineEdit(ReadWidget);
        cardIdEdit->setObjectName(QString::fromUtf8("cardIdEdit"));
        cardIdEdit->setGeometry(QRect(360, 50, 113, 20));
        label_5 = new QLabel(ReadWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 61, 31));
        readstateEdit = new QLineEdit(ReadWidget);
        readstateEdit->setObjectName(QString::fromUtf8("readstateEdit"));
        readstateEdit->setGeometry(QRect(80, 150, 181, 21));
        label_6 = new QLabel(ReadWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 60, 101, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\346\245\267\344\275\223\";"));
        label_7 = new QLabel(ReadWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 180, 61, 31));
        timeEdit = new QLineEdit(ReadWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(80, 190, 181, 21));
        enterBtn = new QPushButton(ReadWidget);
        enterBtn->setObjectName(QString::fromUtf8("enterBtn"));
        enterBtn->setGeometry(QRect(70, 90, 75, 23));
        enterBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        outBtn = new QPushButton(ReadWidget);
        outBtn->setObjectName(QString::fromUtf8("outBtn"));
        outBtn->setGeometry(QRect(180, 90, 75, 23));
        outBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));

        retranslateUi(ReadWidget);

        QMetaObject::connectSlotsByName(ReadWidget);
    } // setupUi

    void retranslateUi(QDialog *ReadWidget)
    {
        ReadWidget->setWindowTitle(QApplication::translate("ReadWidget", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ReadWidget", "\347\217\255\347\272\247\357\274\232", 0, QApplication::UnicodeUTF8));
        nameEdit->setText(QString());
        label->setText(QApplication::translate("ReadWidget", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ReadWidget", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ReadWidget", "\344\275\231\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ReadWidget", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ReadWidget", "\350\277\233\345\207\272\347\212\266\346\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ReadWidget", "\350\277\233\345\207\272\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ReadWidget", "\350\277\233\345\205\245\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        enterBtn->setText(QApplication::translate("ReadWidget", "\347\241\256\350\256\244\350\277\233\345\205\245", 0, QApplication::UnicodeUTF8));
        outBtn->setText(QApplication::translate("ReadWidget", "\347\241\256\350\256\244\347\246\273\345\274\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReadWidget: public Ui_ReadWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READWIDGET_H
