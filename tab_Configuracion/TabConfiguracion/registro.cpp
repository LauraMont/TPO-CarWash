#include "registro.h"
#include "ui_registro.h"
#include "QDebug"

registro::registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registro)
{
    ui->setupUi(this);
}

registro::~registro()
{
    delete ui;
}

void registro::on_boton_seleccion_accepted()
{
    QString usuario = ui->texto_usuario->text();
    QString contrasenia = ui->texto_contrasenia->text();
    QString eliminar_empleado =ui->texto_empleado->text();

    qDebug()<<usuario;
    qDebug()<<contrasenia;
    qDebug()<<eliminar_empleado;

}

void registro::on_boton_seleccion_rejected()
{

}
