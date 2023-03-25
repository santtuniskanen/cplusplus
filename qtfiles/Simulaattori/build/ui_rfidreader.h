/********************************************************************************
** Form generated from reading UI file 'rfidreader.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RFIDREADER_H
#define UI_RFIDREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RFIDreader
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *RFIDreader)
    {
        if (RFIDreader->objectName().isEmpty())
            RFIDreader->setObjectName(QString::fromUtf8("RFIDreader"));
        RFIDreader->resize(280, 62);
        gridLayout_2 = new QGridLayout(RFIDreader);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(RFIDreader);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        lineEdit = new QLineEdit(RFIDreader);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(RFIDreader);

        QMetaObject::connectSlotsByName(RFIDreader);
    } // setupUi

    void retranslateUi(QDialog *RFIDreader)
    {
        RFIDreader->setWindowTitle(QCoreApplication::translate("RFIDreader", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RFIDreader", "Send Card Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RFIDreader: public Ui_RFIDreader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RFIDREADER_H
