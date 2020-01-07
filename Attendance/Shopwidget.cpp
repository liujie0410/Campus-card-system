#include "ShopWidget.h"
#include "ui_ShopWidget.h"
#include <QTreeWidgetItem>
#include <QMessageBox>
#include <QDebug>

ShopWidget::ShopWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShopWidget),
    addMoney(new Shop)
{
    ui->setupUi(this);
}

ShopWidget::~ShopWidget()
{
    delete ui;
}

void ShopWidget::onCardReaded(const QString &cardid)
{
    QString name = DBCard::findName(cardid);
    QString classes = DBCard::findClasses(cardid);
    QString studentid = DBCard::findStudentid(cardid);
    //***余额
    int money = DBCard::findMoney(cardid);
    //QString commodity = DBCard::findCommodity(cardid);
    //qDebug()<<"[onCardReaded] find cardid:"<<cardid<<"; name:" <<name<<"; classes:"<<classes<<"; studentid"<<studentid<<"; money"<<money<<"; Commodity"<<Commodity;
    ui->cardIdEdit->setText(cardid);
    ui->nameEdit->setText(name.isEmpty() ? tr("No such person!") : name);
    ui->classesEdit->setText(classes);
    ui->studentidEdit->setText(studentid);
    QString money1=QString::number(money);
    ui->moneyEdit->setText(money1);
}

void ShopWidget::on_shopButton_clicked()//消费按钮
{
    QString card = ui->cardIdEdit->text();
    onCardReaded(card);
    //扣钱
    DBCard::shop(card);

}

void ShopWidget::on_addmoneyBtn_clicked()//充值按钮
{
    QString card = ui->cardIdEdit->text();
    onCardReaded(card);
    if(!addMoney->isHidden())
            return;
    addMoney->setMoney("");
    if(addMoney->exec() == QDialog::Rejected)
        return;
    DBCard::addmoney(card,addMoney->money());

}

void ShopWidget::on_hallBtn_clicked()//选择商品按钮
{
    QString card = ui->cardIdEdit->text();
    onCardReaded(card);
    //扣钱
    DBCard::commodity1(card);

}

void ShopWidget::on_storeBtn_clicked()//选择商品按钮
{
    QString card = ui->cardIdEdit->text();
    onCardReaded(card);
    //扣钱
    DBCard::commodity2(card);

}

void ShopWidget::on_qmoneyBtn_clicked()//选择商品按钮
{
    QString text1=DBCard::querymoney1();
    QString text2=DBCard::querymoney2();
    ui->hallEdit->setText(text1);
    ui->storeEdit->setText(text2);
}
