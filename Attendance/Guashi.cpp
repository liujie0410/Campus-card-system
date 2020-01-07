#include "Guashi.h"
#include "ui_Guashi.h"

Guashi::Guashi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Guashi)//创建ui变量，控制界面
{
    ui->setupUi(this);
//
   //ui->sftKeypad->changeRecver(ui->nameEdit);
   //connect(ui->sftKeypad, SIGNAL(newString(QString)), this, SLOT(onSftKeypadNewString(QString)));
}

Guashi::~Guashi()
{
    delete ui;
}


QString Guashi::name() const
{
    return ui->nameEdit->text();
}

QString Guashi::studentid() const
{
    return ui->studentidEdit->text();
}


void Guashi::setName(const QString &name)
{
    ui->nameEdit->setText(name);
}


void Guashi::setStudentid(const QString &studentid)
{
    ui->studentidEdit->setText(studentid);
}


void Guashi::onSftKeypadNewString(const QString &str)
{
    ui->nameEdit->insert(str);

    ui->studentidEdit->insert(str);

}
