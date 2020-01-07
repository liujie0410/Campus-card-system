#include "ManageWidget.h"
#include "ui_ManageWidget.h"
#include <QTreeWidgetItem>
#include <QMessageBox>
#include <QDebug>

ManageWidget::ManageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageWidget),
    usrEditDlg(new UserEditDialog),
    usrEditDlg1(new Guashi)
{
    ui->setupUi(this);

    updateUserTable();
}

ManageWidget::~ManageWidget()
{
    delete ui;
}

void ManageWidget::onCardReaded(const QString &cardid)
{
    usrEditDlg->setCardId(cardid);
}

void ManageWidget::updateUserTable()
{
    ui->userTable->clear();
    DBCard c;
    if(c.first())
    {
        QTreeWidgetItem *item;
        do {
            item = new QTreeWidgetItem(ui->userTable);
            item->setText(0, QString::number(c.id()));
            item->setText(1, c.cardid());
            item->setText(2, c.name());
            //12-18changed
            item->setText(3,c.classes());
            item->setText(4, c.dormitory());
            item->setText(5, c.studentid());
            item->setText(6,c.state());//**/
        } while(c.next());
    }
}

void ManageWidget::updateLogTable()
{
    ui->logTable->clear();
    DBLog l;
    if(l.first())
    {
        QTreeWidgetItem *item;
        do {
            item = new QTreeWidgetItem(ui->logTable);
            item->setText(0, QString::number(l.id()));
            item->setText(1, l.date().toString("yyyy-MM-dd hh:mm:ss"));
            item->setText(2, l.cardid());
            //12-25
            item->setText(3, l.name());
            item->setText(4, l.operation());
        } while(l.next());
    }
}

//12-25-2定义查询输入框获取字符
QString ManageWidget::input()
{
    return ui->inputEdit->text();
}

//12-25-2
void ManageWidget::queryLogTable()
{
    QString i;
    i=input();
    qDebug()<<"==40==[DBLog]== querylog:"<<i;
    ui->logTable->clear();
    DBLog l;
    if(l.first())
    {
        QTreeWidgetItem *item;

        do {
            if( l.name()==i){
            item = new QTreeWidgetItem(ui->logTable);
            item->setText(0, QString::number(l.id()));
            item->setText(1, l.date().toString("yyyy-MM-dd hh:mm:ss"));
            item->setText(2, l.cardid());
            //12-25
            item->setText(3, l.name());
            item->setText(4,l.operation());
            }
        } while(l.next());

    }
}
void ManageWidget::on_addBtn_clicked()
{
    if(!usrEditDlg->isHidden())
        return;
    usrEditDlg->setCardId("");
    usrEditDlg->setName("");
    //12-18
    usrEditDlg->setClasses("");
    usrEditDlg->setDormitory("");
    usrEditDlg->setStudentid("");

    if(usrEditDlg->exec() == QDialog::Rejected)
        return;
    if(usrEditDlg->cardId().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("Card ID can't be empty!"));
        return;
    }
    if(usrEditDlg->name().isEmpty())
    {
        QMessageBox::warning(this, tr("Warning"), tr("User Name can't be empty!"));
        return;
    }
    qDebug()<<"====is already in [the on_addBtn_clicked] card:"<<usrEditDlg->cardId();

    DBCard::addCard(usrEditDlg->cardId(), usrEditDlg->name(), usrEditDlg->classes(), usrEditDlg->dormitory(), usrEditDlg->studentid());
    updateUserTable();
    QString operation="add";
    DBLog::addLog(usrEditDlg->cardId(),usrEditDlg->name(),operation);
}

void ManageWidget::on_delBtn_clicked()
{
    QList<QTreeWidgetItem *> selItems = ui->userTable->selectedItems();
    while(selItems.count())
    {
        QTreeWidgetItem *item = selItems.first();
        DBCard::delCard(item->text(1));
        QString cardid=item->text(1);
        QString name=item->text(2);
        QString operation="delete:graduate";
        DBLog::addLog(cardid,name,operation);
        delete item;
        selItems.removeFirst();
    }
}
void ManageWidget::on_delBtn2_clicked()
{
    QList<QTreeWidgetItem *> selItems = ui->userTable->selectedItems();
    while(selItems.count())
    {
        QTreeWidgetItem *item = selItems.first();
        DBCard::delCard(item->text(1));
        QString cardid=item->text(1);
        QString name=item->text(2);
        QString operation="delete:tempcard";
        DBLog::addLog(cardid,name,operation);
        delete item;
        selItems.removeFirst();
    }
}

//12-18
void ManageWidget::on_modifyBtn_clicked()
{
    QList<QTreeWidgetItem *> selItems = ui->userTable->selectedItems();
    if(selItems.count())
    {
        QTreeWidgetItem *item = selItems.first();
        QString states=DBCard::findState(item->text(1));
        if(!usrEditDlg->isHidden())
            return;
        if(states == "Card is lost!")
            QMessageBox::warning(this, tr("Warning"), tr("Card is lost! Can not modify!"));
        else{
        usrEditDlg->setCardId(item->text(1));
        usrEditDlg->setName(item->text(2));
        //12-18
        usrEditDlg->setClasses(item->text(3));
        usrEditDlg->setDormitory(item->text(4));
        usrEditDlg->setStudentid(item->text(5));
        QString cardid=item->text(1);
        QString name=item->text(2);
        QString operation="modify";
        DBLog::addLog(cardid,name,operation);
        if(usrEditDlg->exec() == QDialog::Rejected)
            return;
        //12-18
        DBCard::updateName(usrEditDlg->cardId(), usrEditDlg->name(),usrEditDlg->classes(),usrEditDlg->dormitory(),usrEditDlg->studentid());
        updateUserTable();
      }
    }
}

//***************************************挂失

void ManageWidget::on_guashiBtn_clicked()//guashi键的点击连接
{
        if(!usrEditDlg1->isHidden())
            return;
  usrEditDlg1->setName("");
  usrEditDlg1->setStudentid("");
    if(usrEditDlg1->exec() == QDialog::Rejected)
        return;
    DBCard::guashi(usrEditDlg1->name(), usrEditDlg1->studentid());
    QString name=usrEditDlg1->name();
    QString cardid=DBCard::findCard(name);
    QString operation="guashi";
     DBLog::addLog(cardid,name,operation);

    updateUserTable();
}
//**************************************挂失

void ManageWidget::on_refreshBtn_clicked()
{
    updateLogTable();
}

//12-25-2
void ManageWidget::on_queryBtn_clicked()
{
    queryLogTable();
}

void ManageWidget::on_refreshBtn2_clicked()
{
    updateUserTable();
}
