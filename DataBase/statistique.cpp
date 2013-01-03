#include "statistique.h"
#include "ui_statistique.h"
#include "menu.h"


Statistique::Statistique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Statistique)
{
    ui->setupUi(this);
}

Statistique::~Statistique()
{
    delete ui;
}

void Statistique::on_commandLinkButton_clicked()
{
    Menu m;
    this->close();
    m.exec();
}
