#ifndef GUASHI_H
#define GUASHI_H

#include <QDialog>
#include "t9keyboard/t9widget.h"

namespace Ui {
class Guashi;
}

class Guashi : public QDialog
{
    Q_OBJECT

public:
    explicit Guashi(QWidget *parent = 0);
    ~Guashi();

    QString name() const;
    QString studentid() const;

public slots:
    void setName(const QString &name);
    void setStudentid(const QString &studentid);

private:
    Ui::Guashi *ui;
    T9Widget *sftKeypad;

private slots:
    void onSftKeypadNewString(const QString &str);
};

#endif // GUASHI_H
