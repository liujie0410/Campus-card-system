#include "ClockInWidget.h"
#include "ui_ClockInWidget.h"
#include <QMessageBox>
#include <QDebug>

ClockInWidget::ClockInWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
    updateDateTime();

    timer = new QTimer(this);
    timer->setInterval(1000);
    timer->setSingleShot(false);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));

    timer->start();
}

ClockInWidget::~ClockInWidget()
{
    delete timer;
    delete ui;
}

void ClockInWidget::updateTime()
{
    QDateTime d = QDateTime::currentDateTime();
    ui->secondNumber->display(d.time().second());
    if(d.time().second() == 0)
    {
        ui->minuteLabel->motionToNumber(d.time().minute());
        if(d.time().minute() == 0)
        {
            ui->hourLabel->motionToNumber(d.time().hour());
            if(d.time().hour() == 0)
            {
                ui->dayNumber->display(d.date().day());
                if(d.date().day() == 1)
                {
                    ui->monthNumber->display(d.date().month());
                    if(d.date().month() == 1)
                    {
                        ui->yearNumber->display(d.date().year());
                    }
                }
            }
        }
    }
}

void ClockInWidget::updateDateTime()
{
    QDateTime d = QDateTime::currentDateTime();
    ui->yearNumber->display(d.date().year());
    ui->monthNumber->display(d.date().month());
    ui->dayNumber->display(d.date().day());
    ui->hourLabel->motionToNumber(d.time().hour());
    ui->minuteLabel->motionToNumber(d.time().minute());
    ui->secondNumber->display(d.time().second());
}

void ClockInWidget::onCardReaded(const QString &cardid)
{
    QString name = DBCard::findName(cardid);
    //12-18
    QString classes = DBCard::findClasses(cardid);
    QString dormitory = DBCard::findDormitory(cardid);
    QString studentid = DBCard::findStudentid(cardid);
     QString state = DBCard::findState(cardid);
//12-26
    QString d=ui->ifdomitoryEdit->text();
    //***************12-26
    QString operation="clock";

    //12-18
    qDebug()<<"[onCardReaded] find cardid:"<<cardid<<"; name:" <<name<<"; classes:"<<classes<<"; dormitory"<<dormitory<<"; studentid"<<studentid<<"; state"<<"卡状态正常";
   //12-26
    if(d==dormitory)
    {
    ui->cardIdEdit->setText(cardid);
    ui->nameEdit->setText(name.isEmpty() ? tr("No such person!") : name);
    //12-18
    ui->classesEdit->setText(classes);
    ui->dormitoryEdit->setText(dormitory);
    ui->studentidEdit->setText(studentid);
    ui->stateEdit->setText(state);//***
    DBLog::addLog(cardid,name,operation);
    }else{
        QMessageBox::warning(this, tr("Warning"), tr("No access!"));
    }
}

void ClockInWidget::on_updateButton_clicked()
{
    QString card = ui->cardIdEdit->text();
    onCardReaded(card);
    QString state=DBCard::findState(card);
    if (state=="Card status OK!"){
    QMessageBox::about(this,tr("welcome!"),tr("Welcome back!^_^~"));
    }else{
         QMessageBox::warning(this, tr("Warning"), tr("No access!Your Card has been lost!!!"));
    }
}


void ClockInWidget::on_jieguaBtn_clicked()
{
    QString cardid= ui->cardIdEdit->text();
      qDebug()<<"[onCardReaded] find cardid:"<<cardid;
    QString state=DBCard::findState(cardid);
    if (state=="Card status OK!"){
        QMessageBox::warning(this, tr("Invalid Operation!"),tr("The Card Status is Normal!"));
    }else{
        DBCard::jiegua(cardid);
        QMessageBox::about(this,tr("Success!"),tr("The Card Status has been Canged!PLease clock again!"));
        QString name=DBCard::findCard(cardid);
      QString operation="jiegua";
      DBLog::addLog(cardid,name,operation);
    }

}
