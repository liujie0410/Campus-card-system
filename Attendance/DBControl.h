#ifndef DBCONTROL_H
#define DBCONTROL_H
#include <QString>
#include <QStringList>
#include <QDateTime>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QVariant>


class QSqlDatabase;
class DBControl : public QObject
{
    Q_OBJECT

public:
    static DBControl *_instance_;
    static QSqlDatabase *_mainDB;

    explicit DBControl(QObject *parent = 0);
    ~DBControl();

    static void setServer(const QString &ip);
    static QString server();
    static const QSqlDatabase &database() { return *_mainDB; }

    static bool hasDatabase(const QString &dbName);
    static void createDatabase(const QString &dbName);
    static bool CheckCreateTable();
    static void Destroy();

    static DBControl *instance();
    static QSqlQuery exec(const QString &sql = QString());

    static QDateTime getServerDateTime();
protected:

    static bool checkTable(const QString &tblName);
    static bool createTable(const QString &tblName, const QStringList &fieldList);
    static void removeTable(const QString &tblName);
    static void checkDatabase();
    static bool hasTable(const QString &tblName);
private:
    static void init();

};

class DBCard : public DBControl
{
public:
    DBCard(const QString &cardid = "");
    virtual ~DBCard();

    bool first();
    bool next();
    int id() const;
    QString cardid() const;
    QString name() const;
    //12-18changed
    QString classes() const;
    QString dormitory() const;
    QString studentid() const;
    QString state() const;
    int money() const;
    QString commodity() const;

    static QString findName(const QString &cardid);
    static QString findCard(const QString &name);
    //12-18changed
    static QString findClasses(const QString &cardid);
    static QString findDormitory(const QString &cardid);
    static QString findStudentid(const QString &cardid);
    static QString findState(const QString &cardid);
    static QString findReadstate(const QString &cardid);
    static QString findTime(const QString &cardid);
    static int findMoney(const QString &cardid);
    static QString findCommodity(const QString &cardid);
    //12-18
    static bool addCard(const QString &cardid, const QString &name,const QString &classes,const QString &dormitory,const QString &studentid);
    static void delCard(const QString &cardid);
    static void guashi(const QString &name,const QString &studentid);
    static void jiegua(const QString &cardid);
    static void shop(const QString &cardid);
    static void commodity1(const QString &cardid);
    static void commodity2(const QString &cardid);
    static void addmoney(const QString &cardid,const QString &money);
    static void timemoney(const QString &cardid);
    static void enter(const QString &cardid);
    static QString querymoney1();
    static QString querymoney2();
    static bool updateName(const QString &cardid, const QString &newname,const QString &newstudentid,const QString &newclasses,const QString &newdormitory);
    static bool updateCardId(const QString &name, const QString &newcardid,const QString &newclasses,const QString &newdormitory,const QString &newstudentid);

protected:
    QSqlQuery *q;
};

class DBLog : public DBControl
{
public:
    //12-25
    DBLog(const QString &cardid = "");
    virtual ~DBLog();

    bool first();
    bool next();
    int id() const;
    QDateTime date() const;
    QString cardid() const;
    //12-25
    QString name() const;
    QString operation() const;

    static bool addLog(const QString &cardid,const QString &name,const QString &operation);
    static void delLog(int id);
    static void delOldLog(const QDateTime &d);
    static void delNewLog(const QDateTime &d);
    static void delLogNotIn(const QDateTime &d1, const QDateTime &d2);
    static void delLogBetween(const QDateTime &d1, const QDateTime &d2);

protected:
    QSqlQuery *q;
};


#define dbCtrller   (DBControl::instance())
#endif // DBCONTROL_H
