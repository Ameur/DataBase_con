#ifndef VENTE_H
#define VENTE_H

#include <QDialog>

namespace Ui {
class vente;
}

class vente : public QDialog
{
    Q_OBJECT
    
public:
    explicit vente(QWidget *parent = 0);
    ~vente();
    
private slots:
    void showTime();
    void on_commandLinkButton_clicked();

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_commandLinkButton_2_clicked();

    void on_pushButton_13_clicked();






    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_fore_clicked();

    void on_five_clicked();

    void on_zero_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();


    void on_tableVente_doubleClicked();

    void on_tablesomme_doubleClicked();

private:
    Ui::vente *ui;
};

#endif // VENTE_H
