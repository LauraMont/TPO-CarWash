#ifndef PRUEBA_FALLO_H
#define PRUEBA_FALLO_H

#include <QDialog>

namespace Ui {
class Prueba_fallo;
}

class Prueba_fallo : public QDialog
{
    Q_OBJECT

public:
    explicit Prueba_fallo(QWidget *parent = nullptr);
    ~Prueba_fallo();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Prueba_fallo *ui;
};

#endif // PRUEBA_FALLO_H
