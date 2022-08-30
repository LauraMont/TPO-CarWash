#ifndef PRUEBA_EXITO_H
#define PRUEBA_EXITO_H

#include <QDialog>

namespace Ui {
class Prueba_exito;
}

class Prueba_exito : public QDialog
{
    Q_OBJECT

public:
    explicit Prueba_exito(QWidget *parent = nullptr);
    ~Prueba_exito();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Prueba_exito *ui;
};

#endif // PRUEBA_EXITO_H
