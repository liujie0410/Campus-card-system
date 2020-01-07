/********************************************************************************
** Form generated from reading UI file 'UserEditDialog.ui'
**
** Created: Wed Dec 25 19:09:45 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDITDIALOG_H
#define UI_USEREDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include "t9keyboard/t9widget.h"

QT_BEGIN_NAMESPACE

class Ui_UserEditDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *studentidEdit;
    QLineEdit *classesEdit;
    QLineEdit *dormitoryEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    T9Widget *sftKeypad;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *cardIdEdit;
    QLineEdit *nameEdit;

    void setupUi(QDialog *UserEditDialog)
    {
        if (UserEditDialog->objectName().isEmpty())
            UserEditDialog->setObjectName(QString::fromUtf8("UserEditDialog"));
        UserEditDialog->resize(263, 233);
        buttonBox = new QDialogButtonBox(UserEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 190, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        studentidEdit = new QLineEdit(UserEditDialog);
        studentidEdit->setObjectName(QString::fromUtf8("studentidEdit"));
        studentidEdit->setGeometry(QRect(90, 130, 133, 20));
        classesEdit = new QLineEdit(UserEditDialog);
        classesEdit->setObjectName(QString::fromUtf8("classesEdit"));
        classesEdit->setGeometry(QRect(90, 70, 133, 20));
        dormitoryEdit = new QLineEdit(UserEditDialog);
        dormitoryEdit->setObjectName(QString::fromUtf8("dormitoryEdit"));
        dormitoryEdit->setGeometry(QRect(90, 100, 133, 20));
        label_3 = new QLabel(UserEditDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 71, 16));
        label_4 = new QLabel(UserEditDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 70, 41, 16));
        label_5 = new QLabel(UserEditDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 100, 61, 21));
        sftKeypad = new T9Widget(UserEditDialog);
        sftKeypad->setObjectName(QString::fromUtf8("sftKeypad"));
        sftKeypad->setGeometry(QRect(50, 160, 191, 21));
        label_2 = new QLabel(UserEditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(31, 37, 30, 16));
        label = new QLabel(UserEditDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(31, 11, 48, 16));
        cardIdEdit = new QLineEdit(UserEditDialog);
        cardIdEdit->setObjectName(QString::fromUtf8("cardIdEdit"));
        cardIdEdit->setGeometry(QRect(90, 10, 133, 20));
        nameEdit = new QLineEdit(UserEditDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(90, 40, 133, 20));

        retranslateUi(UserEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UserEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UserEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserEditDialog);
    } // setupUi

    void retranslateUi(QDialog *UserEditDialog)
    {
        UserEditDialog->setWindowTitle(QApplication::translate("UserEditDialog", "User Edit Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UserEditDialog", "Student ID:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UserEditDialog", "Class:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UserEditDialog", "Dormitory:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserEditDialog", "Name:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserEditDialog", "Card ID:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserEditDialog: public Ui_UserEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDITDIALOG_H
