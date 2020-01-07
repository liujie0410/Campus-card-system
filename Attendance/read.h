#ifndef READ_H
#define READ_H

#include <QDialog>

namespace Ui {
class Read;
}

class Read : public QDialog
{
    Q_OBJECT

public:
    explicit Read(QWidget *parent = 0);
    ~Read();

private:
    Ui::Read *ui;
};

#endif // READ_H
