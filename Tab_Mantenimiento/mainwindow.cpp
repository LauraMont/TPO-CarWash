#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "prueba_exito.h"
#include "prueba_fallo.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


void MainWindow::on_pushButton_2_clicked()
{
    Prueba_exito *window2a = new Prueba_exito(this);

    window2a->setModal(true);
    window2a->show();

    Prueba_fallo *window2b = new Prueba_fallo(this);

    window2b->setModal(true);
    window2b->show();
}


void MainWindow::on_pushButton_3_clicked()
{

    Prueba_exito *window3 = new Prueba_exito(this);

    window3->setModal(true);
    window3->show();
    Prueba_fallo *window3b = new Prueba_fallo(this);

    window3b->setModal(true);
    window3b->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    bool a;
    a=false;
    if(a==true){
    Prueba_exito *window4 = new Prueba_exito(this);

    window4->setModal(true);
    window4->show();
}else{
    Prueba_fallo *window4b = new Prueba_fallo(this);

    window4b->setModal(true);
    window4b->show();
}
}


void MainWindow::on_pushButton_5_clicked()
{
    bool a;
    a = true;

    if(a==true){
    Prueba_exito *window5 = new Prueba_exito(this);

    window5->setModal(true);
    window5->show();
} else{
    Prueba_fallo *window5b = new Prueba_fallo(this);

    window5b->setModal(true);
    window5b->show();
}
}


void MainWindow::on_pushButton_clicked()
{
    bool a;

    a = true;
    if (a==true){
    Prueba_exito *window1 = new Prueba_exito(this);

    window1->setModal(true);
    window1->show();
    }
    else{
    Prueba_fallo *window1b = new Prueba_fallo(this);

    window1b->setModal(true);
    window1b->show();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


