/********************************************************************************
** Form generated from reading UI file 'ShopWidget.ui'
**
** Created: Tue Dec 31 21:21:08 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPWIDGET_H
#define UI_SHOPWIDGET_H

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

class Ui_ShopWidget
{
public:
    QLineEdit *cardIdEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *classesEdit;
    QLabel *label_4;
    QLineEdit *studentidEdit;
    QPushButton *hallBtn;
    QPushButton *storeBtn;
    QPushButton *shopButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *moneyEdit;
    QLabel *label_10;
    QPushButton *addmoneyBtn;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *hallEdit;
    QLineEdit *storeEdit;
    QPushButton *qmoneyBtn;

    void setupUi(QDialog *ShopWidget)
    {
        if (ShopWidget->objectName().isEmpty())
            ShopWidget->setObjectName(QString::fromUtf8("ShopWidget"));
        ShopWidget->resize(717, 298);
        cardIdEdit = new QLineEdit(ShopWidget);
        cardIdEdit->setObjectName(QString::fromUtf8("cardIdEdit"));
        cardIdEdit->setGeometry(QRect(330, 30, 113, 20));
        label = new QLabel(ShopWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 30, 31, 21));
        label_2 = new QLabel(ShopWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 70, 31, 21));
        nameEdit = new QLineEdit(ShopWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(330, 70, 113, 20));
        label_3 = new QLabel(ShopWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 110, 31, 21));
        classesEdit = new QLineEdit(ShopWidget);
        classesEdit->setObjectName(QString::fromUtf8("classesEdit"));
        classesEdit->setGeometry(QRect(330, 110, 113, 20));
        label_4 = new QLabel(ShopWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 150, 31, 21));
        studentidEdit = new QLineEdit(ShopWidget);
        studentidEdit->setObjectName(QString::fromUtf8("studentidEdit"));
        studentidEdit->setGeometry(QRect(330, 150, 113, 20));
        hallBtn = new QPushButton(ShopWidget);
        hallBtn->setObjectName(QString::fromUtf8("hallBtn"));
        hallBtn->setGeometry(QRect(40, 180, 61, 21));
        hallBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        storeBtn = new QPushButton(ShopWidget);
        storeBtn->setObjectName(QString::fromUtf8("storeBtn"));
        storeBtn->setGeometry(QRect(140, 180, 61, 21));
        storeBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        shopButton = new QPushButton(ShopWidget);
        shopButton->setObjectName(QString::fromUtf8("shopButton"));
        shopButton->setGeometry(QRect(140, 230, 61, 21));
        shopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        label_5 = new QLabel(ShopWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 30, 111, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 15pt \"\346\245\267\344\275\223\";"));
        label_6 = new QLabel(ShopWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 150, 171, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        label_7 = new QLabel(ShopWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 70, 121, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";\n"
"font: 11pt \"\351\273\221\344\275\223\";"));
        label_8 = new QLabel(ShopWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 100, 121, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        label_9 = new QLabel(ShopWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 230, 101, 20));
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        moneyEdit = new QLineEdit(ShopWidget);
        moneyEdit->setObjectName(QString::fromUtf8("moneyEdit"));
        moneyEdit->setGeometry(QRect(330, 190, 113, 20));
        label_10 = new QLabel(ShopWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(290, 190, 31, 21));
        addmoneyBtn = new QPushButton(ShopWidget);
        addmoneyBtn->setObjectName(QString::fromUtf8("addmoneyBtn"));
        addmoneyBtn->setGeometry(QRect(360, 230, 51, 21));
        addmoneyBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        label_11 = new QLabel(ShopWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(550, 60, 111, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_12 = new QLabel(ShopWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(490, 100, 41, 21));
        label_13 = new QLabel(ShopWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(490, 150, 41, 21));
        hallEdit = new QLineEdit(ShopWidget);
        hallEdit->setObjectName(QString::fromUtf8("hallEdit"));
        hallEdit->setGeometry(QRect(540, 100, 113, 20));
        storeEdit = new QLineEdit(ShopWidget);
        storeEdit->setObjectName(QString::fromUtf8("storeEdit"));
        storeEdit->setGeometry(QRect(540, 150, 113, 20));
        qmoneyBtn = new QPushButton(ShopWidget);
        qmoneyBtn->setObjectName(QString::fromUtf8("qmoneyBtn"));
        qmoneyBtn->setGeometry(QRect(550, 200, 91, 21));
        qmoneyBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));

        retranslateUi(ShopWidget);

        QMetaObject::connectSlotsByName(ShopWidget);
    } // setupUi

    void retranslateUi(QDialog *ShopWidget)
    {
        ShopWidget->setWindowTitle(QApplication::translate("ShopWidget", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ShopWidget", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ShopWidget", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        nameEdit->setText(QString());
        label_3->setText(QApplication::translate("ShopWidget", "\347\217\255\347\272\247\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ShopWidget", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        hallBtn->setText(QApplication::translate("ShopWidget", "\351\243\237\345\240\202", 0, QApplication::UnicodeUTF8));
        storeBtn->setText(QApplication::translate("ShopWidget", "\345\225\206\345\272\227", 0, QApplication::UnicodeUTF8));
        shopButton->setText(QApplication::translate("ShopWidget", "\346\266\210\350\264\271", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ShopWidget", "\346\266\210\350\264\271\344\273\267\346\240\274\350\241\250", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ShopWidget", "\350\257\267\351\200\211\346\213\251\351\234\200\350\246\201\346\266\210\350\264\271\347\232\204\345\234\260\345\235\200\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ShopWidget", "\351\243\237\345\240\202\345\215\225\344\273\26710\345\205\203/\344\273\266", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ShopWidget", "\345\225\206\345\272\227\345\215\225\344\273\26715\345\205\203/\344\273\266", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ShopWidget", "\347\202\271\345\207\273\347\241\256\350\256\244\346\266\210\350\264\271", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ShopWidget", "\344\275\231\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        addmoneyBtn->setText(QApplication::translate("ShopWidget", "\345\205\205\345\200\274", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ShopWidget", "\350\220\245\344\270\232\351\242\235\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ShopWidget", "\351\243\237\345\240\202\357\274\232", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ShopWidget", "\345\225\206\345\272\227\357\274\232", 0, QApplication::UnicodeUTF8));
        qmoneyBtn->setText(QApplication::translate("ShopWidget", "\346\233\264\346\226\260\350\220\245\344\270\232\351\242\235", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShopWidget: public Ui_ShopWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPWIDGET_H
