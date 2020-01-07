#ifndef SHOP_H
#define SHOP_H

#include <QDialog>
#include "t9keyboard/t9widget.h"

namespace Ui {
class Shop;
}

class Shop : public QDialog
{
    Q_OBJECT

public:
    explicit Shop(QWidget *parent = 0);
    ~Shop();

    QString money() const;

public slots:
    void setMoney(const QString &name);

private:
    Ui::Shop *ui;
    T9Widget *sftKeypad;

private slots:
    void onSftKeypadNewString(const QString &str);
};

#endif // SHOP_H
