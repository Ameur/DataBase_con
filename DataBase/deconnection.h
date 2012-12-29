#ifndef DECONNECTION_H
#define DECONNECTION_H

#include <QDialog>

namespace Ui {
class deconnection;
}

class deconnection : public QDialog
{
    Q_OBJECT
    
public:
    explicit deconnection(QWidget *parent = 0);
    ~deconnection();
    
private:
    Ui::deconnection *ui;
};

#endif // DECONNECTION_H
