#include "Read.h"
#include "ui_Read.h"

Read::Read(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Read)
{
    ui->setupUi(this);
}

Read::~Read()
{
    delete ui;
}
