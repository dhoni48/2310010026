/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaUserLabel;
    QLineEdit *namaUserLineEdit;
    QLabel *teleponLabel;
    QLineEdit *teleponLineEdit;
    QLabel *jabatanLabel;
    QLineEdit *jabatanLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *hakAksesLabel;
    QLineEdit *hakAksesLineEdit;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(250, 217);
        pushButton = new QPushButton(user);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 180, 81, 21));
        label = new QLabel(user);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 91, 21));
        formLayoutWidget = new QWidget(user);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 40, 211, 128));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaUserLabel = new QLabel(formLayoutWidget);
        namaUserLabel->setObjectName("namaUserLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaUserLabel);

        namaUserLineEdit = new QLineEdit(formLayoutWidget);
        namaUserLineEdit->setObjectName("namaUserLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaUserLineEdit);

        teleponLabel = new QLabel(formLayoutWidget);
        teleponLabel->setObjectName("teleponLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, teleponLabel);

        teleponLineEdit = new QLineEdit(formLayoutWidget);
        teleponLineEdit->setObjectName("teleponLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, teleponLineEdit);

        jabatanLabel = new QLabel(formLayoutWidget);
        jabatanLabel->setObjectName("jabatanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jabatanLabel);

        jabatanLineEdit = new QLineEdit(formLayoutWidget);
        jabatanLineEdit->setObjectName("jabatanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jabatanLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, passwordLineEdit);

        hakAksesLabel = new QLabel(formLayoutWidget);
        hakAksesLabel->setObjectName("hakAksesLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, hakAksesLabel);

        hakAksesLineEdit = new QLineEdit(formLayoutWidget);
        hakAksesLineEdit->setObjectName("hakAksesLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, hakAksesLineEdit);


        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "Tangkap Data", nullptr));
        label->setText(QCoreApplication::translate("user", "DATA USER", nullptr));
        namaUserLabel->setText(QCoreApplication::translate("user", "Nama User", nullptr));
        teleponLabel->setText(QCoreApplication::translate("user", "Telepon", nullptr));
        jabatanLabel->setText(QCoreApplication::translate("user", "Jabatan", nullptr));
        passwordLabel->setText(QCoreApplication::translate("user", "Password", nullptr));
        hakAksesLabel->setText(QCoreApplication::translate("user", "Hak Akses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
