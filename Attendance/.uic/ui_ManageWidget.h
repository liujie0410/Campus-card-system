/********************************************************************************
** Form generated from reading UI file 'ManageWidget.ui'
**
** Created: Tue Dec 31 21:23:38 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEWIDGET_H
#define UI_MANAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QTreeWidget *userTable;
    QPushButton *guashiBtn;
    QPushButton *addBtn;
    QPushButton *delBtn2;
    QPushButton *delBtn;
    QPushButton *modifyBtn;
    QPushButton *refreshBtn2;
    QGroupBox *groupBox_2;
    QTreeWidget *logTable;
    QLineEdit *inputEdit;
    QPushButton *queryBtn;
    QPushButton *refreshBtn;

    void setupUi(QWidget *ManageWidget)
    {
        if (ManageWidget->objectName().isEmpty())
            ManageWidget->setObjectName(QString::fromUtf8("ManageWidget"));
        ManageWidget->resize(668, 323);
        horizontalLayout_3 = new QHBoxLayout(ManageWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(ManageWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\351\273\221\344\275\223\";"));
        userTable = new QTreeWidget(groupBox);
        userTable->setObjectName(QString::fromUtf8("userTable"));
        userTable->setGeometry(QRect(10, 80, 301, 141));
        userTable->setStyleSheet(QString::fromUtf8(""));
        guashiBtn = new QPushButton(groupBox);
        guashiBtn->setObjectName(QString::fromUtf8("guashiBtn"));
        guashiBtn->setGeometry(QRect(31, 20, 81, 21));
        guashiBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        addBtn = new QPushButton(groupBox);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(190, 20, 62, 23));
        addBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        delBtn2 = new QPushButton(groupBox);
        delBtn2->setObjectName(QString::fromUtf8("delBtn2"));
        delBtn2->setGeometry(QRect(30, 50, 81, 21));
        delBtn2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        delBtn = new QPushButton(groupBox);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(120, 50, 62, 23));
        delBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        modifyBtn = new QPushButton(groupBox);
        modifyBtn->setObjectName(QString::fromUtf8("modifyBtn"));
        modifyBtn->setGeometry(QRect(190, 50, 61, 23));
        modifyBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        refreshBtn2 = new QPushButton(groupBox);
        refreshBtn2->setObjectName(QString::fromUtf8("refreshBtn2"));
        refreshBtn2->setGeometry(QRect(120, 20, 61, 23));
        refreshBtn2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));

        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ManageWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\351\273\221\344\275\223\";"));
        logTable = new QTreeWidget(groupBox_2);
        logTable->setObjectName(QString::fromUtf8("logTable"));
        logTable->setGeometry(QRect(10, 80, 291, 141));
        inputEdit = new QLineEdit(groupBox_2);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));
        inputEdit->setGeometry(QRect(11, 40, 141, 21));
        queryBtn = new QPushButton(groupBox_2);
        queryBtn->setObjectName(QString::fromUtf8("queryBtn"));
        queryBtn->setGeometry(QRect(160, 40, 75, 23));
        queryBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        refreshBtn = new QPushButton(groupBox_2);
        refreshBtn->setObjectName(QString::fromUtf8("refreshBtn"));
        refreshBtn->setGeometry(QRect(240, 40, 75, 23));
        refreshBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family:heiti;\n"
"	font: 75 10pt \"\351\273\221\344\275\223\";\n"
"height:20px;\n"
"width:60px;\n"
"color:white;\n"
"background-color:rgb(1, 70, 39);\n"
"border-radius:8px;\n"
"}"));
        logTable->raise();
        groupBox->raise();
        groupBox->raise();
        groupBox->raise();
        groupBox->raise();

        horizontalLayout_3->addWidget(groupBox_2);


        retranslateUi(ManageWidget);

        QMetaObject::connectSlotsByName(ManageWidget);
    } // setupUi

    void retranslateUi(QWidget *ManageWidget)
    {
        groupBox->setTitle(QApplication::translate("ManageWidget", "User Manage", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = userTable->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("ManageWidget", "Status", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(5, QApplication::translate("ManageWidget", "StudentID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("ManageWidget", "Dormitory", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("ManageWidget", "Class", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("ManageWidget", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("ManageWidget", "CardId", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("ManageWidget", "ID", 0, QApplication::UnicodeUTF8));
        guashiBtn->setText(QApplication::translate("ManageWidget", "\346\214\202\345\244\261", 0, QApplication::UnicodeUTF8));
        addBtn->setText(QApplication::translate("ManageWidget", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        delBtn2->setText(QApplication::translate("ManageWidget", "\345\210\240\351\231\244\344\270\264\346\227\266\345\215\241", 0, QApplication::UnicodeUTF8));
        delBtn->setText(QApplication::translate("ManageWidget", "\346\257\225\344\270\232\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        modifyBtn->setText(QApplication::translate("ManageWidget", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        refreshBtn2->setText(QApplication::translate("ManageWidget", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ManageWidget", "Log Viewer", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = logTable->headerItem();
        ___qtreewidgetitem1->setText(4, QApplication::translate("ManageWidget", "Operation", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(3, QApplication::translate("ManageWidget", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("ManageWidget", "Card ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("ManageWidget", "Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("ManageWidget", "ID", 0, QApplication::UnicodeUTF8));
        queryBtn->setText(QApplication::translate("ManageWidget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        refreshBtn->setText(QApplication::translate("ManageWidget", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ManageWidget);
    } // retranslateUi

};

namespace Ui {
    class ManageWidget: public Ui_ManageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEWIDGET_H
