/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Proceso;
    QWidget *Estadistica;
    QWidget *Mantenimiento;
    QWidget *Configuracion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(674, 401);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-5, 0, 681, 371));
        Proceso = new QWidget();
        Proceso->setObjectName(QString::fromUtf8("Proceso"));
        tabWidget->addTab(Proceso, QString());
        Estadistica = new QWidget();
        Estadistica->setObjectName(QString::fromUtf8("Estadistica"));
        tabWidget->addTab(Estadistica, QString());
        Mantenimiento = new QWidget();
        Mantenimiento->setObjectName(QString::fromUtf8("Mantenimiento"));
        tabWidget->addTab(Mantenimiento, QString());
        Configuracion = new QWidget();
        Configuracion->setObjectName(QString::fromUtf8("Configuracion"));
        tabWidget->addTab(Configuracion, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 674, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Proceso), QCoreApplication::translate("MainWindow", "Proceso", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Estadistica), QCoreApplication::translate("MainWindow", "Estadistica", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mantenimiento), QCoreApplication::translate("MainWindow", "Mantenimiento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Configuracion), QCoreApplication::translate("MainWindow", "Configuracion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
