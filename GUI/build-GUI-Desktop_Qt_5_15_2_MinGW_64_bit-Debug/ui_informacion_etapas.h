/********************************************************************************
** Form generated from reading UI file 'informacion_etapas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMACION_ETAPAS_H
#define UI_INFORMACION_ETAPAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Informacion_etapas
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *Informacion_etapas)
    {
        if (Informacion_etapas->objectName().isEmpty())
            Informacion_etapas->setObjectName(QString::fromUtf8("Informacion_etapas"));
        Informacion_etapas->resize(362, 332);
        pushButton = new QPushButton(Informacion_etapas);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 290, 80, 24));
        lineEdit = new QLineEdit(Informacion_etapas);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 40, 16, 16));
        lineEdit->setReadOnly(true);
        label = new QLabel(Informacion_etapas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 40, 121, 16));
        lineEdit_2 = new QLineEdit(Informacion_etapas);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 70, 16, 16));
        lineEdit_2->setReadOnly(true);
        label_2 = new QLabel(Informacion_etapas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 70, 121, 16));
        label_3 = new QLabel(Informacion_etapas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 130, 121, 16));
        lineEdit_3 = new QLineEdit(Informacion_etapas);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 100, 16, 16));
        lineEdit_3->setReadOnly(true);
        label_4 = new QLabel(Informacion_etapas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 100, 121, 16));
        lineEdit_4 = new QLineEdit(Informacion_etapas);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 130, 16, 16));
        lineEdit_4->setReadOnly(true);
        label_5 = new QLabel(Informacion_etapas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 220, 121, 16));
        lineEdit_5 = new QLineEdit(Informacion_etapas);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 190, 16, 16));
        QPalette palette;
        QBrush brush(QColor(0, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush1(QColor(255, 51, 51, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        lineEdit_5->setPalette(palette);
        lineEdit_5->setReadOnly(true);
        label_6 = new QLabel(Informacion_etapas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 190, 121, 16));
        lineEdit_6 = new QLineEdit(Informacion_etapas);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 220, 16, 16));
        lineEdit_6->setReadOnly(true);
        label_7 = new QLabel(Informacion_etapas);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 250, 121, 16));
        lineEdit_7 = new QLineEdit(Informacion_etapas);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(100, 250, 16, 16));
        lineEdit_7->setReadOnly(true);
        label_8 = new QLabel(Informacion_etapas);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 10, 121, 16));
        QFont font;
        font.setPointSize(12);
        label_8->setFont(font);
        label_9 = new QLabel(Informacion_etapas);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 160, 141, 16));
        label_9->setFont(font);

        retranslateUi(Informacion_etapas);

        QMetaObject::connectSlotsByName(Informacion_etapas);
    } // setupUi

    void retranslateUi(QWidget *Informacion_etapas)
    {
        Informacion_etapas->setWindowTitle(QCoreApplication::translate("Informacion_etapas", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Informacion_etapas", "Aceptar", nullptr));
        lineEdit->setText(QCoreApplication::translate("Informacion_etapas", " 1", nullptr));
        label->setText(QCoreApplication::translate("Informacion_etapas", "Sistema de lavado", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Informacion_etapas", " 2", nullptr));
        label_2->setText(QCoreApplication::translate("Informacion_etapas", "Sistema de cepillado", nullptr));
        label_3->setText(QCoreApplication::translate("Informacion_etapas", "Sistema de secado", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Informacion_etapas", " 3", nullptr));
        label_4->setText(QCoreApplication::translate("Informacion_etapas", "Sistema de enjuague", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("Informacion_etapas", " 4", nullptr));
        label_5->setText(QCoreApplication::translate("Informacion_etapas", "Finalizado", nullptr));
        lineEdit_5->setText(QString());
        label_6->setText(QCoreApplication::translate("Informacion_etapas", "En marcha", nullptr));
        lineEdit_6->setText(QString());
        label_7->setText(QCoreApplication::translate("Informacion_etapas", "Error", nullptr));
        lineEdit_7->setText(QString());
        label_8->setText(QCoreApplication::translate("Informacion_etapas", "Sistemas", nullptr));
        label_9->setText(QCoreApplication::translate("Informacion_etapas", "Codigo de colores", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Informacion_etapas: public Ui_Informacion_etapas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMACION_ETAPAS_H
