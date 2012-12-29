#include "fournisseur.h"
#include "ui_fournisseur.h"
#include "menu.h"
#include <menu.h>
fournisseur::fournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fournisseur)
{
    ui->setupUi(this);
}

fournisseur::~fournisseur()
{
    delete ui;
}






void fournisseur::on_commandLinkButton_2_clicked()
{
    Menu m;
    this->close();
    m.exec();
}
