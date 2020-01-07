#include "Shop.h"
#include "ui_Shop.h"

Shop::Shop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shop)
{
    ui->setupUi(this);
}

Shop::~Shop()
{
    delete ui;
}

QString Shop::money() const
{
    return ui->moneyEdit->text();
}

void Shop::setMoney(const QString &money)
{
    ui->moneyEdit->setText(money);
}

void Shop::onSftKeypadNewString(const QString &str)
{
    ui->moneyEdit->insert(str);
}
