#include "Readwidget.h"
#include "ui_Readwidget.h"

ReadWidget::ReadWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReadWidget)
{
    ui->setupUi(this);
}

ReadWidget::~ReadWidget()
{
    delete ui;
}

void ReadWidget::onCardReaded(const QString &cardid)
{
    QString name = DBCard::findName(cardid);
    QString classes = DBCard::findClasses(cardid);
    QString studentid = DBCard::findStudentid(cardid);
    //***余额
    int money = DBCard::findMoney(cardid);
    QString readstate=DBCard::findReadstate(cardid);
    QString time=DBCard::findTime(cardid);
    //QString commodity = DBCard::findCommodity(cardid);
    //qDebug()<<"[onCardReaded] find cardid:"<<cardid<<"; name:" <<name<<"; classes:"<<classes<<"; studentid"<<studentid<<"; money"<<money<<"; Commodity"<<Commodity;
    ui->cardIdEdit->setText(cardid);
    ui->nameEdit->setText(name.isEmpty() ? tr("No such person!") : name);
    ui->classesEdit->setText(classes);
    ui->studentidEdit->setText(studentid);
    QString money1=QString::number(money);
    ui->moneyEdit->setText(money1);
    ui->readstateEdit->setText(readstate);
    ui->timeEdit->setText(time);
}

void ReadWidget::on_enterBtn_clicked()//进入按钮
{
    QString card = ui->cardIdEdit->text();
    onCardReaded(card);
    //
    DBCard::enter(card);
}

void ReadWidget::on_outBtn_clicked()//离开按钮
{
    QString card = ui->cardIdEdit->text();
    onCardReaded(card);
    DBCard::timemoney(card);
}
