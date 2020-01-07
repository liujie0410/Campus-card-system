/********************************************************************************
** Form generated from reading UI file 'Guashi.ui'
**
** Created: Thu Dec 26 11:04:08 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUASHI_H
#define UI_GUASHI_H

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

class Ui_Guashi
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QLineEdit *studentidEdit;
    QLabel *label_3;

    void setupUi(QDialog *Guashi)
    {
        if (Guashi->objectName().isEmpty())
            Guashi->setObjectName(QString::fromUtf8("Guashi"));
        Guashi->resize(249, 216);
        buttonBox = new QDialogButtonBox(Guashi);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 150, 161, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nameEdit = new QLineEdit(Guashi);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(89, 33, 133, 20));
        label_2 = new QLabel(Guashi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 30, 30, 16));
        studentidEdit = new QLineEdit(Guashi);
        studentidEdit->setObjectName(QString::fromUtf8("studentidEdit"));
        studentidEdit->setGeometry(QRect(90, 80, 133, 20));
        label_3 = new QLabel(Guashi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 71, 16));

        retranslateUi(Guashi);
        QObject::connect(buttonBox, SIGNAL(accepted()), Guashi, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Guashi, SLOT(reject()));

        QMetaObject::connectSlotsByName(Guashi);
    } // setupUi

    void retranslateUi(QDialog *Guashi)
    {
        Guashi->setWindowTitle(QApplication::translate("Guashi", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Guashi", "Name:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Guashi", "Student ID:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Guashi: public Ui_Guashi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUASHI_H
