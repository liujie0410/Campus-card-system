#ifndef MANAGEWIDGET_H
#define MANAGEWIDGET_H

#include <QWidget>
#include "DBControl.h"
#include "UserEditDialog.h"
#include "Guashi.h"

namespace Ui {
    class ManageWidget;
}

class ManageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ManageWidget(QWidget *parent = 0);
    ~ManageWidget();

public slots:
    void onCardReaded(const QString &cardid);

private:
    Ui::ManageWidget *ui;
    UserEditDialog *usrEditDlg;
    Guashi *usrEditDlg1;

private slots:
    //12-25-2
    void on_queryBtn_clicked();

    void on_refreshBtn_clicked();
    void on_modifyBtn_clicked();
    void on_delBtn_clicked();
    void on_delBtn2_clicked();
    void on_addBtn_clicked();
    void on_guashiBtn_clicked();
    void on_refreshBtn2_clicked();
    void updateUserTable();
    void updateLogTable();
    //12-25-2
    void queryLogTable();
    QString input();
};

#endif // MANAGEWIDGET_H
