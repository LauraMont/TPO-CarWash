#ifndef REGISTRO_H
#define REGISTRO_H

#include <QWidget>

namespace Ui {
class registro;
}

class registro : public QWidget
{
    Q_OBJECT

public:
    explicit registro(QWidget *parent = nullptr);
    ~registro();

private slots:
    void on_boton_seleccion_accepted();

    void on_boton_seleccion_rejected();

private:
    Ui::registro *ui;
};

#endif // REGISTRO_H
