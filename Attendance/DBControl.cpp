#include "DBControl.h"
#include <QDebug>
#include <stdio.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlError>
#include <QStringList>
#include <QDebug>
#include <QMessageBox>
#include <QSettings>


/*****************************************************************/
/* DBControl class                                               */
/*****************************************************************/
#define DEFAULT_DB_SERVER_IP	"192.168.1.100"  //"192.168.1.96"
#define MAKE_SURE_VALID(...)   do { if((_instance_ == NULL) || (_mainDB == NULL)) return __VA_ARGS__; } while(0)
DBControl *DBControl::_instance_ = NULL;
QSqlDatabase *DBControl::_mainDB = NULL;
DBControl::DBControl(QObject *parent) : QObject(parent)
{
    if(_instance_ == NULL)
    {
        _instance_ = this;
        _mainDB = new QSqlDatabase(QSqlDatabase::addDatabase("QMYSQL"));
        init();
    }
}

DBControl::~DBControl()
{
    if(_instance_ == this)
    {
        _mainDB->close();
        delete _mainDB;
        _instance_ = NULL;
        QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
    }
}

bool DBControl::hasDatabase(const QString &dbName)
{
    MAKE_SURE_VALID(false);
    QString sql = QString(
                "SELECT SCHEMA_NAME FROM information_schema.schemata "
                "WHERE SCHEMA_NAME = ?");
    QSqlQuery query = exec();
    query.prepare(sql);
    query.addBindValue(dbName);
    if(query.exec() && query.next())
        return true;
    return false;
}

void DBControl::createDatabase(const QString &dbName)
{
    MAKE_SURE_VALID();
    QString sql = QString("CREATE DATABASE `%1`").arg(dbName);
    exec(sql);
}


void DBControl::setServer(const QString &ip)
{
    do {
        QSettings s("SunplusAPP", "Attendance");
        s.setValue("hostIP", ip);
        s.sync();
    } while(0);

    if(_instance_ != NULL)
        delete _instance_;
    instance();
}

QString DBControl::server()
{
    return QSettings("SunplusAPP", "Attendance")
            .value("hostIP", DEFAULT_DB_SERVER_IP).toString();
}

void DBControl::init()
{
    QSettings s("SunplusAPP", "Attendance");
    _mainDB->close();
    _mainDB->setHostName(s.value("hostIP", DEFAULT_DB_SERVER_IP).toString());
    _mainDB->setPort(3306);
    _mainDB->setUserName("root");
    _mainDB->setPassword("");
    _mainDB->setDatabaseName("wsn_storesys");
    if (!_mainDB->open()) {     //open err!!
        qDebug()<<"==open database err:"<<_mainDB->lastError().driverText();
    } else {

        _mainDB->exec("USE `wsn_storesys`;");
        qDebug()<<"==open database[wsn_storesys] OKKK!!!";
    }
}


bool DBControl::CheckCreateTable()
{
    MAKE_SURE_VALID(false);
    qDebug()<<"[CheckCreateTable] check database start!";
    if(!_mainDB->open())
    {
        qDebug()<<_mainDB->lastError().driverText();
        return false;
    }
    checkDatabase();
    return true;
}

void DBControl::Destroy()
{
    if(_mainDB == NULL)
        return;
    _mainDB->close();
    delete _mainDB;
    _mainDB = NULL;
    QSqlDatabase::removeDatabase("attendance");
}



bool DBControl::checkTable(const QString &tblName)
{
    if(_mainDB == NULL)
        return false;

#if     0
    QSqlQuery q(*_mainDB);
    QString sql = QString(
                "SELECT count(*) FROM sqlite_master WHERE `name` = '%1'").arg(tblName);
    if(!q.exec(sql))
        return false;
    if(!q.first())
    {
        q.finish();
        return false;
    }
    int count = q.value(0).toInt();
    q.finish();
    return (count > 0);
#else
    MAKE_SURE_VALID(false);
    return _mainDB->tables().contains(tblName);
#endif
}

void DBControl::removeTable(const QString &tblName)
{
    if(_mainDB == NULL)
        return;
#if     0
    QSqlQuery q(*_mainDB);
    QString sql = QString("DROP TABLE `%1`").arg(tblName);
    q.exec(sql);
    q.finish();
#else
    exec(QString("DROP TABLE `%1`").arg(tblName));
#endif

}

bool DBControl::hasTable(const QString &tblName)
{
    MAKE_SURE_VALID(false);
    return _mainDB->tables().contains(tblName);
}

bool DBControl::createTable(const QString &tblName, const QStringList &fieldList)
{
    if(_mainDB == NULL)
        return false;
    if(fieldList.count() <= 0)
        return false;
    if(checkTable(tblName))
        return true;
#if     0
    QSqlQuery q(*_mainDB);
    QString sql = QString("CREATE TABLE `%1` (").arg(tblName);
    QStringList::const_iterator i;
    for(i = fieldList.constBegin(); i != fieldList.constEnd(); ++i)
    {
        sql += (*i);
        sql += ",";
    }
    if(sql.at(sql.length() - 1) == ',')
        sql = sql.left(sql.length() - 1);
    else
        return false;
    sql += ")";
    bool ret = q.exec(sql);
    q.finish();
    qDebug()<<"[createTable] creatTable tblname:"<<sql<<";return:"<<ret;
    return ret;
#else
    MAKE_SURE_VALID(false);
    if(tblName.isEmpty() || fieldList.isEmpty())
        return false;
    if(hasTable(tblName))
        return false;

    QString sql = QString("CREATE TABLE `%1`(").arg(tblName);
    int i;
    sql += "`id` int(11) NOT NULL AUTO_INCREMENT,";
    for(i = 0; i < fieldList.count(); i++)
    {
        sql += fieldList.at(i);
        sql += ",";
    }
    sql += "PRIMARY KEY (`id`)";
    sql += ") ENGINE=InnoDB DEFAULT CHARSET=utf8";
    exec(sql);

    return true;
#endif

}

void DBControl::checkDatabase()
{
    if(_mainDB == NULL)
        return;

    qDebug()<<"[checkDatabase] creatTable start!";
    if(!checkTable("tbl_id"))
    {
        createTable("tbl_id", QStringList()
                    <<"[id] INTEGER  NOT NULL PRIMARY KEY AUTOINCREMENT"
                    <<"[cardid] TEXT  UNIQUE NOT NULL"
                    <<"[name] TEXT  NOT NULL"
                    );
    }
    if(!checkTable("tbl_log"))
    {
        createTable("tbl_log", QStringList()
                    <<"[id] INTEGER  NOT NULL PRIMARY KEY AUTOINCREMENT"
                    <<"[date] TIMESTAMP DEFAULT CURRENT_TIMESTAMP NOT NULL"
                    <<"[cardid] TEXT  NOT NULL"
                    );
    }
    qDebug()<<"[checkDatabase] creatTable end!";
}


QSqlQuery DBControl::exec(const QString &sql)
{
    MAKE_SURE_VALID(QSqlQuery());

    QSqlQuery query = _mainDB->exec(sql);
    if(_mainDB->lastError().isValid())
    {
        qDebug()<<"==[exec]== error when execute"<<sql<<"with error type"<<_mainDB->lastError().type();
        if(_mainDB->lastError().type() == QSqlError::ConnectionError)
        {
            qDebug()<<"==[exec]== database server down!, reconnecting...";
            init();
        }
    }
    return query;
}

QDateTime DBControl::getServerDateTime()
{
    QSqlQuery query = exec("SELECT now()");
    if(query.first())
        return query.value(0).toDateTime();
    return QDateTime();
}



DBControl *DBControl::instance()
{
    if(_instance_ == NULL)
        new DBControl();
    return _instance_;
}


/*****************************************************************/
/* DBCard class                                                  */
/*****************************************************************/
DBCard::DBCard(const QString &cardid)
    : q(NULL)
{
    MAKE_SURE_VALID();
    qDebug()<<"==11==[DBCard]== database get database by Card:"<<cardid;
    QString sql = QString("SELECT `id`,`cardid`,`name`,`classes`,`dormitory`,`studentid`,`state` FROM `tbl_id`");
    if(!cardid.isEmpty())
        sql += QString(" WHERE `cardid` = '%1'").arg(cardid);
    q = new QSqlQuery(*_mainDB);
    q->exec(sql);
    if(!q->isActive())
    {
        delete q;
        q = NULL;
    }
    else
        q->first();
}

DBCard::~DBCard()
{
    if(q)
        delete q;
}

bool DBCard::first()
{
    if(q == NULL)
        return false;
    return q->first();
}

bool DBCard::next()
{
    if(q == NULL)
        return false;
    return q->next();
}

int DBCard::id() const
{
    if(q == NULL)
        return -1;
    if(!q->isActive())
        return -1;
    if(!q->isValid())
        return -1;
    return q->value(0).toInt();
}

QString DBCard::cardid() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(1).toString();
}

QString DBCard::name() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(2).toString();
}

//12-18
QString DBCard::classes() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(3).toString();
}
QString DBCard::dormitory() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(4).toString();
}
QString DBCard::studentid() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(5).toString();
}

QString DBCard::state() const//返回数据库中第7列
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(6).toString();
}//**

    int DBCard::money() const
{
    if(q == NULL)
        return -1;
    if(!q->isActive())
        return -1;
    if(!q->isValid())
        return -1;
    return q->value(7).toInt();
}

QString DBCard::commodity() const

{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(8).toString();
}

QString DBCard::findName(const QString &cardid)
{

    qDebug()<<"==11==[findName]== database get name by Card:"<<cardid;
#if     0
    QString sql = QString("SELECT [name] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==22==[findName]== database get name:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `name` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif

}

//12-18
QString DBCard::findClasses(const QString &cardid)
{

    qDebug()<<"==11==[findClasses]== database get classes by Card:"<<cardid;
#if     0
    QString sql = QString("SELECT [classes] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==22==[findClasses]== database get classes:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `classes` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif

}

QString DBCard::findDormitory(const QString &cardid)
{

    qDebug()<<"==11==[findDormitory]== database get name by Card:"<<cardid;
#if     0
    QString sql = QString("SELECT [dormitory] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==22==[findDormitory]== database get dormitory:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `dormitory` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif

}

QString DBCard::findStudentid(const QString &cardid)
{

    qDebug()<<"==11==[findStudentid]== database get name by Card:"<<cardid;
#if     0
    QString sql = QString("SELECT [studentid] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==22==[findStudentid]== database get studentid:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `studentid` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif

}

QString DBCard::findState(const QString &cardid)
{

    qDebug()<<"==88==[findState]== database get name by Card:"<<cardid;
#if     0
    QString sql = QString("SELECT [state] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==22==[findState]== database get state:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `state` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif

}

//-------------------------------12-31
QString DBCard::findReadstate(const QString &cardid)
{
#if     0
    QString sql = QString("SELECT [readstate] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==02==[findReadstate]== database getread state:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `readstate` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif
}

QString DBCard::findTime(const QString &cardid)
{
#if     0
    QString sql = QString("SELECT [time] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==01==[findTime]== database get time:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `time` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif
}

//
int DBCard::findMoney(const QString &cardid)
{

    qDebug()<<"==11==[findMoney]== database get money by Card:"<<cardid;
#if     0
    QString sql = QString("SELECT [money] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return -1;
    if(!q.first())
        return -1;
    int ret = q.value(0).toInt();
    q.finish();
    qDebug()<<"==22==[findMoney]== database get money:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `money` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toInt();
    return -1;
#endif

}
//
QString DBCard::findCommodity(const QString &cardid)
{

    qDebug()<<"==11==[findCommodity]== database get commodity by Card:"<<cardid;
#if     0
    QString sql = QString("SELECT [commodity] FROM [tbl_id] WHERE [cardid] = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    qDebug()<<"==22==[findcommodity]== database get commodity:"<<ret;
    return ret;
#else
    QString sql = QString(
                "SELECT `commodity` FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif

}

QString DBCard::findCard(const QString &name)
{
    QString sql = QString("SELECT `cardid` FROM `tbl_id` WHERE `name` = '%1'").arg(name);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    return ret;
}


//12-18
bool DBCard::addCard(const QString &cardid, const QString &name,const QString &classes,const QString &dormitory,const QString &studentid)
{
    MAKE_SURE_VALID(false);
    qDebug()<<"====is already in [addCard] card:"<<cardid<<"; name:"<<name<<"; classes:"<<classes<<"; dormitory:"<<dormitory<<"; studentid:"<<studentid<<"; state:"<<"Card status OK!";
    if(findName(cardid).isEmpty() && findCard(name).isEmpty())
    {
        QString sql = QString(
                    "INSERT INTO `tbl_id` (`cardid`, `name`,`classes`,`dormitory`,`studentid`,`state`,`money`,`commodity`,`readstate`,`time`) VALUES ('%1', '%2','%3','%4','%5','Card status OK!','0','0','out','0000-00-00 00:00:00.000000')"
                ).arg(cardid).arg(name).arg(classes).arg(dormitory).arg(studentid);
        QSqlQuery q(*_mainDB);
        bool ret = q.exec(sql);

        q.finish();
        qDebug()<<"====[addCard] exec ret:"<<ret;
        return ret;
    }
    else
        return false;
}



void DBCard::delCard(const QString &cardid)
{
    QString sql = QString(
            "DELETE FROM `tbl_id` WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}

bool DBCard::updateName(const QString &cardid, const QString &newname,const QString &newclasses,const QString &newdormitory,const QString &newstudentid)
{
  //  if(!findCard(newname).isEmpty())
    //    return false;

    if(!findName(cardid).isEmpty())
        delCard(cardid);
    if(!findClasses(cardid).isEmpty())
        delCard(cardid);
    if(!findDormitory(cardid).isEmpty())
        delCard(cardid);
    if(!findStudentid(cardid).isEmpty())
        delCard(cardid);
    return addCard(cardid, newname,newclasses,newdormitory,newstudentid);
}

void DBCard::guashi(const QString &name,const QString &studentid)
{
    QString sql = QString(
            "update `tbl_id` set `state` = 'Card is lost!' WHERE `name` = '%1' and `studentid` = '%2'").arg(name).arg(studentid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}
void DBCard::jiegua(const QString &cardid)
{
    QString sql = QString(
            "update `tbl_id` set `state` = 'Card status OK!' WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}
void DBCard::shop(const QString &cardid)
{
    QString commodity1=findCommodity(cardid);
    int money1=findMoney(cardid);
    if(commodity1 == "1")
    {
        if(money1 >= 10)
        {
            QString sql = QString(
            "update `tbl_id` set `money` = `money` - 10  WHERE `cardid` = '%1'").arg(cardid);
        QSqlQuery q(*_mainDB);
        q.exec(sql);
        q.finish();
        QString sql2 = QString(
        "update `tbl_shop` set `total` = `total` +10  WHERE `place` = 'hall'");
       QSqlQuery q2(*_mainDB);
       q2.exec(sql2);
       q2.finish();
        QMessageBox::about(NULL,tr("Success!"),tr("Shopping successfully!Welcome next time!"));
       QString sql3 = QString(
                   "update `tbl_id` set `commodity` = '0'  WHERE `cardid` = '%1'").arg(cardid);
      QSqlQuery q3(*_mainDB);
      q3.exec(sql3);
      q3.finish();
        }
        else{QMessageBox::warning(NULL, tr("Warning"), tr("Sorry,your card is running low!!!"));}
    }else if(commodity1 == "2"){
        if(money1 >= 15)
        {QString sql = QString(
            "update `tbl_id` set `money` = `money` - 15  WHERE `cardid` = '%1'").arg(cardid);
        QSqlQuery q(*_mainDB);
        q.exec(sql);
        q.finish();
        QString sql2 = QString(
        "update `tbl_shop` set `total` = `total` +15  WHERE `place` = 'store'");
       QSqlQuery q2(*_mainDB);
       q2.exec(sql2);
       q2.finish();
       QMessageBox::about(NULL,tr("Success!"),tr("Shopping successfully!Welcome next time!"));
       QString sql3 = QString(
                   "update `tbl_id` set `commodity` = '0'  WHERE `cardid` = '%1'").arg(cardid);
      QSqlQuery q3(*_mainDB);
      q3.exec(sql3);
      q3.finish();
        }
        else{QMessageBox::warning(NULL, tr("Warning"), tr("Sorry,your card is running low!!!"));}
    }else if(findCommodity(cardid) == "0"){
     QMessageBox::warning(NULL, tr("Warning"), tr("No commodity chosed!"));
    }
}

void DBCard::commodity1(const QString &cardid)
{
    QString sql = QString(
            "update `tbl_id` set `commodity` =  '1' WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}

void DBCard::commodity2(const QString &cardid)
{
    QString sql = QString(
            "update `tbl_id` set `commodity` =  '2' WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}

void DBCard::addmoney(const QString &cardid,const QString &money)
{
    int val=money.toInt();
    if(val<=0)
    QMessageBox::warning(NULL, tr("Warning"), tr("Please input legally!"));
    else{
    int val2=val+findMoney(cardid);
    QString money2=QString::number(val2);
    QString sql = QString(
                "update `tbl_id` set `money` ='%1' WHERE `cardid` = '%2'").arg(money2).arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
       QMessageBox::about(NULL,tr("Success!"),tr("To-up successfully!Card again to check!"));}
}

//-------------------------------------------------------------12-31
void DBCard::timemoney(const QString &cardid)
{
    QString sql = QString(
                "update `tbl_id` set `readstate` ='out' WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();

    QDateTime outtime = QDateTime::currentDateTime();
    QString t = findTime(cardid);
    QDateTime entertime = QDateTime::fromString(t,"yyyy-MM-dd hh:mm:ss");
    int m_time =entertime.secsTo(outtime);//时间差
   qDebug()<<"==06==[timemoney]== m_time:"<<m_time;
   int times=m_time/5;
   int yushu=m_time%5;
   int delmoney=0;
   if(m_time<=5) delmoney=1;
   else {
       if(yushu==0) delmoney=times;
       else delmoney=times+1;
   }
   int dbmoney=findMoney(cardid);
   int money=dbmoney-delmoney;
   QString sql2 = QString(
               "update `tbl_id` set `money` ='%1' WHERE `cardid` = '%2'").arg(money).arg(cardid);
   QSqlQuery q2(*_mainDB);
   q2.exec(sql2);
   q2.finish();
}

void DBCard::enter(const QString &cardid){

    QString sql = QString(
                "update `tbl_id` set `readstate` ='enter' WHERE `cardid` = '%1'").arg(cardid);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
     QDateTime d = QDateTime::currentDateTime();
     QString time=d.toString("yyyy-MM-dd hh:mm:ss");
      qDebug()<<"==05==[enter]== database get time by Card:"<<time;
    QString sql2 = QString(
                "update `tbl_id` set `time` = '%1' WHERE `cardid` = '%2'").arg(time).arg(cardid);
    QSqlQuery q2(*_mainDB);
    q2.exec(sql2);
    q2.finish();
}

//--------------------------------------------12-31
QString DBCard::querymoney1(){
#if     0
    QString sql = QString("SELECT `total` FROM `tbl_shop` WHERE `place` = 'hall'");
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    return ret;
#else
    QString sql = QString(
               "SELECT `total` FROM `tbl_shop` WHERE `place` = 'hall'");
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif
}
QString DBCard::querymoney2(){
#if     0
    QString sql = QString("SELECT `total` FROM `tbl_shop` WHERE `place` = 'store'");
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    if(!q.isActive())
        return QString();
    if(!q.first())
        return QString();
    QString ret = q.value(0).toString();
    q.finish();
    return ret;
#else
    QString sql = QString(
               "SELECT `total` FROM `tbl_shop` WHERE `place` = 'store'");
    QSqlQuery query = DBControl::exec(sql);
    if(query.first())
        return query.value(0).toString();
    return QString();
#endif
}


/*****************************************************************/
/* DBLog class                                                   */
/*****************************************************************/
DBLog::DBLog(const QString &cardid)
    : q(NULL)
{

    MAKE_SURE_VALID();
    qDebug()<<"==22==[DBLog]== database get database by Card:"<<cardid;
    //12-25
    QString sql = QString("SELECT `id`, `date`, `cardid`, `name`, `operation` FROM `tbl_log`");
    if(!cardid.isEmpty())
        sql += QString(" WHERE `cardid` = '%1'").arg(cardid);
    q = new QSqlQuery(*_mainDB);
    q->exec(sql);
    if(!q->isActive())
    {
        delete q;
        q = NULL;
    }
    q->first();
}

DBLog::~DBLog()
{
    if(q)
        delete q;
}

bool DBLog::first()
{
    if(q == NULL)
        return false;
    return q->first();
}

bool DBLog::next()
{
    if(q == NULL)
        return false;
    return q->next();
}

int DBLog::id() const
{
    if(q == NULL)
        return -1;
    if(!q->isActive())
        return -1;
    if(!q->isValid())
        return -1;
    return q->value(0).toInt();
}

QDateTime DBLog::date() const
{
    if(q == NULL)
        return QDateTime();
    if(!q->isActive())
        return QDateTime();
    if(!q->isValid())
        return QDateTime();
    return q->value(1).toDateTime();
}

QString DBLog::cardid() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(2).toString();
}

//12-25
QString DBLog::name() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(3).toString();
}

QString DBLog::operation() const
{
    if(q == NULL)
        return QString();
    if(!q->isActive())
        return QString();
    if(!q->isValid())
        return QString();
    return q->value(4).toString();
}

//****************12-26
bool DBLog::addLog(const QString &cardid,const QString &name,const QString &operation)
{
    QDateTime d = QDateTime::currentDateTime();
    QString date = d.toString();
    qDebug()<<"==33==[DBLog]== database addLog:"<<cardid<<date<<name<<operation;
#if     0
    QString sql = QString(
                //12-25
            "INSERT INTO `tbl_log` (`date`, `cardid`, `name`, `operation`) VALUES ('%1', '%2', '%3', '%4')"
            ).arg(date).arg(cardid).arg(name).arg(operation);
#else
    QString sql = QString(
            "INSERT INTO `tbl_log` (`cardid`, `name`, `operation`) VALUES ('%1', '%2', '%3')"
            ).arg(cardid).arg(name).arg(operation);
#endif
    QSqlQuery q(*_mainDB);
    bool ret = q.exec(sql);
    q.finish();
    return ret;
}


void DBLog::delLog(int id)
{
    QString sql = QString(
            "DELETE FROM `tbl_log` WHERE `id` = %1").arg(id);
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}

void DBLog::delOldLog(const QDateTime &d)
{
    char sql[512];
    sprintf(sql, "DELETE FROM `tbl_log` WHERE `date` < '%d-%02d-%02d %02d:%02d:%02d'",
            d.date().year(), d.date().month(), d.date().day(),
            d.time().hour(), d.time().minute(), d.time().second());
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}

void DBLog::delNewLog(const QDateTime &d)
{
    char sql[512];
    sprintf(sql, "DELETE FROM `tbl_log` WHERE `date` > '%d-%02d-%02d %02d:%02d:%02d'",
            d.date().year(), d.date().month(), d.date().day(),
            d.time().hour(), d.time().minute(), d.time().second());
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}


void DBLog::delLogNotIn(const QDateTime &dt1, const QDateTime &dt2)
{
    QDateTime d1(dt1), d2(dt2);
    if(d1 > d2)
    {
        QDateTime d = d1;
        d1 = d2;
        d2 = d1;
    }
    char sql[512];
    sprintf(sql, "DELETE FROM `tbl_log` WHERE `date` < '%d-%02d-%02d %02d:%02d:%02d' OR `date` > '%d-%02d-%02d %02d:%02d:%02d'",
            d1.date().year(), d1.date().month(), d1.date().day(),
            d1.time().hour(), d1.time().minute(), d1.time().second(),
            d2.date().year(), d2.date().month(), d2.date().day(),
            d2.time().hour(), d2.time().minute(), d2.time().second());
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}


void DBLog::delLogBetween(const QDateTime &dt1, const QDateTime &dt2)
{
    QDateTime d1(dt1), d2(dt2);
    if(d1 > d2)
    {
        QDateTime d = d1;
        d1 = d2;
        d2 = d1;
    }
    char sql[512];
    sprintf(sql, "DELETE FROM `tbl_log` WHERE `date` >= '%d-%02d-%02d %02d:%02d:%02d' AND `date` <= '%d-%02d-%02d %02d:%02d:%02d'",
            d1.date().year(), d1.date().month(), d1.date().day(),
            d1.time().hour(), d1.time().minute(), d1.time().second(),
            d2.date().year(), d2.date().month(), d2.date().day(),
            d2.time().hour(), d2.time().minute(), d2.time().second());
    QSqlQuery q(*_mainDB);
    q.exec(sql);
    q.finish();
}


