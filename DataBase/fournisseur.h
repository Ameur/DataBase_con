#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QDialog>

namespace Ui {
class fournisseur;
}

class fournisseur : public QDialog
{
    Q_OBJECT
    
public:
    explicit fournisseur(QWidget *parent = 0);
    ~fournisseur();
    
private slots:
    //void on_commandLinkButton_clicked();

    void on_commandLinkButton_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_clicked();

    void on_commandLinkButton_2_clicked();

private:
    Ui::fournisseur *ui;
};

#endif // FOURNISSEUR_H
