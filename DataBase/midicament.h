#ifndef MIDICAMENT_H
#define MIDICAMENT_H
#include <QtSql>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class midicament;
}

class midicament : public QDialog
{
    Q_OBJECT
    
public:
    explicit midicament(QWidget *parent = 0);
    ~midicament();
    void medica();
    void listemed();
     void listedARMOI2();
    void listedARMOI();
    void listedFamille();
    void listeLibellert();
private slots:
    void on_commandLinkButton_clicked();
    void on_commandLinkButton_3_clicked();
    void on_BotAjouterAjouMed_clicked();

    void on_BOTAnnulerAjout_clicked();
    void on_pushButtonRecherchmed_clicked();
    void on_reches_currentIndexChanged(const QString &arg1);

    void on_Med_destroyed();

    void on_pushButtonAffichageMed_clicked();

    void on_listViewAffichageMed_activated(const QModelIndex &index);

    void on_listViewAffichageMed_destroyed();

    void on_textEdit_textChanged();

    void on_pushButton_clicked();

    void on_comboModifMed_currentIndexChanged(const QString &arg1);

    void on_pushButtonSupModMed_clicked();

    void on_pushButtonModifModMed_clicked();

    void on_lineEditCodee_3_currentIndexChanged(const QString &arg1);
    void on_comboBoxLib_currentIndexChanged();

    void on_commandLinkButton_2_clicked();

    void on_commandLinkButton_4_clicked();

private:
    Ui::midicament *ui;
    QSqlDatabase myDB;
};

#endif // MIDICAMENT_H
