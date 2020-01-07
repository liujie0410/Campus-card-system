#include "UserEditDialog.h"
#include "ui_UserEditDialog.h"

UserEditDialog::UserEditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserEditDialog)
{
    ui->setupUi(this);
//输入键盘
   ui->sftKeypad->changeRecver(ui->nameEdit);
   connect(ui->sftKeypad, SIGNAL(newString(QString)), this, SLOT(onSftKeypadNewString(QString)));
}

UserEditDialog::~UserEditDialog()
{
    delete ui;
}

QString UserEditDialog::cardId() const
{
    return ui->cardIdEdit->text();
}

QString UserEditDialog::name() const
{
    return ui->nameEdit->text();
}
//12-18修改{
QString UserEditDialog::classes() const
{
    return ui->classesEdit->text();
}

QString UserEditDialog::dormitory() const
{
    return ui->dormitoryEdit->text();
}

QString UserEditDialog::studentid() const
{
    return ui->studentidEdit->text();
}
//}

void UserEditDialog::setCardId(const QString &id)
{
    ui->cardIdEdit->setText(id);
}

void UserEditDialog::setName(const QString &name)
{
    ui->nameEdit->setText(name);
}
//12-18修改{
void UserEditDialog::setClasses(const QString &classes)
{
    ui->classesEdit->setText(classes);
}

void UserEditDialog::setDormitory(const QString &dormitory)
{
    ui->dormitoryEdit->setText(dormitory);
}

void UserEditDialog::setStudentid(const QString &studentid)
{
    ui->studentidEdit->setText(studentid);
}
//}

void UserEditDialog::onSftKeypadNewString(const QString &str)
{
    ui->nameEdit->insert(str);
    //12-18
    ui->studentidEdit->insert(str);
    ui->classesEdit->insert(str);
    ui->dormitoryEdit->insert(str);
}
