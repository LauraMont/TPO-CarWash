#ifndef INFORMACION_ETAPAS_H
#define INFORMACION_ETAPAS_H

#include <QWidget>

namespace Ui {
class Informacion_etapas;
}

class Informacion_etapas : public QWidget
{
    Q_OBJECT

public:
    explicit Informacion_etapas(QWidget *parent = nullptr);
    ~Informacion_etapas();

private:
    Ui::Informacion_etapas *ui;
};

#endif // INFORMACION_ETAPAS_H
