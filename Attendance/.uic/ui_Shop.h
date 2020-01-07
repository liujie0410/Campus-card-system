/********************************************************************************
** Form generated from reading UI file 'Shop.ui'
**
** Created: Tue Dec 31 13:27:29 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Shop
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *moneyEdit;
    QLabel *label;

    void setupUi(QDialog *Shop)
    {
        if (Shop->objectName().isEmpty())
            Shop->setObjectName(QString::fromUtf8("Shop"));
        Shop->resize(224, 189);
        buttonBox = new QDialogButtonBox(Shop);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 130, 141, 21));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        moneyEdit = new QLineEdit(Shop);
        moneyEdit->setObjectName(QString::fromUtf8("moneyEdit"));
        moneyEdit->setGeometry(QRect(50, 80, 113, 20));
        label = new QLabel(Shop);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 111, 31));

        retranslateUi(Shop);
        QObject::connect(buttonBox, SIGNAL(accepted()), Shop, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Shop, SLOT(reject()));

        QMetaObject::connectSlotsByName(Shop);
    } // setupUi

    void retranslateUi(QDialog *Shop)
    {
        Shop->setWindowTitle(QApplication::translate("Shop", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Shop", "\350\257\267\350\276\223\345\205\245\345\205\205\345\200\274\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Shop: public Ui_Shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H
