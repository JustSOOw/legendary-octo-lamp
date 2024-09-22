/********************************************************************************
** Form generated from reading UI file 'test_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_DIALOG_H
#define UI_TEST_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Test_Dialog
{
public:
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *Test_Dialog)
    {
        if (Test_Dialog->objectName().isEmpty())
            Test_Dialog->setObjectName("Test_Dialog");
        Test_Dialog->resize(400, 300);
        commandLinkButton = new QCommandLinkButton(Test_Dialog);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(220, 250, 172, 41));

        retranslateUi(Test_Dialog);

        QMetaObject::connectSlotsByName(Test_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Test_Dialog)
    {
        Test_Dialog->setWindowTitle(QCoreApplication::translate("Test_Dialog", "Dialog", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Test_Dialog", "CommandLinkButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test_Dialog: public Ui_Test_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_DIALOG_H
