/********************************************************************************
** Form generated from reading UI file 'info_sistemas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_SISTEMAS_H
#define UI_INFO_SISTEMAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_info_sistemas
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *info_sistemas)
    {
        if (info_sistemas->objectName().isEmpty())
            info_sistemas->setObjectName(QString::fromUtf8("info_sistemas"));
        info_sistemas->resize(367, 346);
        buttonBox = new QDialogButtonBox(info_sistemas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 290, 211, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label_2 = new QLabel(info_sistemas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 80, 121, 16));
        lineEdit = new QLineEdit(info_sistemas);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 50, 16, 16));
        lineEdit->setReadOnly(true);
        label_5 = new QLabel(info_sistemas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 230, 121, 16));
        label_6 = new QLabel(info_sistemas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 200, 121, 16));
        lineEdit_7 = new QLineEdit(info_sistemas);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 260, 16, 16));
        lineEdit_7->setReadOnly(true);
        label_9 = new QLabel(info_sistemas);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 170, 141, 16));
        QFont font;
        font.setPointSize(12);
        label_9->setFont(font);
        lineEdit_2 = new QLineEdit(info_sistemas);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 80, 16, 16));
        lineEdit_2->setReadOnly(true);
        label_3 = new QLabel(info_sistemas);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 140, 121, 16));
        label_8 = new QLabel(info_sistemas);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 20, 121, 16));
        label_8->setFont(font);
        lineEdit_4 = new QLineEdit(info_sistemas);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(110, 140, 16, 16));
        lineEdit_4->setReadOnly(true);
        label = new QLabel(info_sistemas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 50, 121, 16));
        lineEdit_3 = new QLineEdit(info_sistemas);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 110, 16, 16));
        lineEdit_3->setReadOnly(true);
        label_7 = new QLabel(info_sistemas);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 260, 121, 16));
        lineEdit_5 = new QLineEdit(info_sistemas);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 200, 16, 16));
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
        label_4 = new QLabel(info_sistemas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 110, 121, 16));
        lineEdit_6 = new QLineEdit(info_sistemas);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(110, 230, 16, 16));
        lineEdit_6->setReadOnly(true);

        retranslateUi(info_sistemas);
        QObject::connect(buttonBox, SIGNAL(accepted()), info_sistemas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), info_sistemas, SLOT(reject()));

        QMetaObject::connectSlotsByName(info_sistemas);
    } // setupUi

    void retranslateUi(QDialog *info_sistemas)
    {
        info_sistemas->setWindowTitle(QCoreApplication::translate("info_sistemas", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("info_sistemas", "Sistema de cepillado", nullptr));
        lineEdit->setText(QCoreApplication::translate("info_sistemas", " 1", nullptr));
        label_5->setText(QCoreApplication::translate("info_sistemas", "Finalizado", nullptr));
        label_6->setText(QCoreApplication::translate("info_sistemas", "En marcha", nullptr));
        lineEdit_7->setText(QString());
        label_9->setText(QCoreApplication::translate("info_sistemas", "Codigo de colores", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("info_sistemas", " 2", nullptr));
        label_3->setText(QCoreApplication::translate("info_sistemas", "Sistema de secado", nullptr));
        label_8->setText(QCoreApplication::translate("info_sistemas", "Sistemas", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("info_sistemas", " 4", nullptr));
        label->setText(QCoreApplication::translate("info_sistemas", "Sistema de lavado", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("info_sistemas", " 3", nullptr));
        label_7->setText(QCoreApplication::translate("info_sistemas", "Error", nullptr));
        lineEdit_5->setText(QString());
        label_4->setText(QCoreApplication::translate("info_sistemas", "Sistema de enjuague", nullptr));
        lineEdit_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class info_sistemas: public Ui_info_sistemas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_SISTEMAS_H
