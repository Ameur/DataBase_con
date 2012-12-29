#include "deconnection.h"
#include "ui_deconnection.h"

deconnection::deconnection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deconnection)
{
    ui->setupUi(this);
}

deconnection::~deconnection()
{
    delete ui;
}
