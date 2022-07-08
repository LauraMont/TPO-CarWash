#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->info_pb, SIGNAL(clicked()), this, SLOT(info_pb_Clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: info_pb_Clicked(void)
{
    Informacion_etapas *ventana = new Informacion_etapas;
    ventana->show();
}
