#ifndef SHOPWIDGET_H
#define SHOPWIDGET_H
#include "DBControl.h"
#include "Shop.h"
#include <QDialog>

namespace Ui {
class ShopWidget;
}

class ShopWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ShopWidget(QWidget *parent = 0);
    ~ShopWidget();

public slots:
    void onCardReaded(const QString &cardid);

private:
    Ui::ShopWidget *ui;
    Shop *addMoney;

private slots:
    void on_shopButton_clicked();
    void on_addmoneyBtn_clicked();
    void on_hallBtn_clicked();
    void on_storeBtn_clicked();
    void on_qmoneyBtn_clicked();
};

#endif // SHOPWIDGET_H
