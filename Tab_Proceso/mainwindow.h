#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <info_sistemas.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void info_pb_Clicked(void);
    void cerrar_sesion_pb_Clicked (void);
};
#endif // MAINWINDOW_H
