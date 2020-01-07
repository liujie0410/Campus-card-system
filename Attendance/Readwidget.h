#ifndef READWIDGET_H
#define READWIDGET_H
#include "DBControl.h"

#include <QDialog>

namespace Ui {
class ReadWidget;
}

class ReadWidget : public QDialog
{
    Q_OBJECT

public:
    explicit ReadWidget(QWidget *parent = 0);
    ~ReadWidget();

private:
    Ui::ReadWidget *ui;

public slots:
    void onCardReaded(const QString &cardid);

private slots:
    void on_enterBtn_clicked();
    void on_outBtn_clicked();
};

#endif // READWIDGET_H
