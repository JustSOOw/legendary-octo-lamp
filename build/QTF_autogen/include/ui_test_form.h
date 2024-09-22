/********************************************************************************
** Form generated from reading UI file 'test_form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_FORM_H
#define UI_TEST_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test_Form
{
public:
    QToolButton *toolButton;

    void setupUi(QWidget *Test_Form)
    {
        if (Test_Form->objectName().isEmpty())
            Test_Form->setObjectName("Test_Form");
        Test_Form->resize(400, 300);
        toolButton = new QToolButton(Test_Form);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(10, 140, 25, 22));

        retranslateUi(Test_Form);

        QMetaObject::connectSlotsByName(Test_Form);
    } // setupUi

    void retranslateUi(QWidget *Test_Form)
    {
        Test_Form->setWindowTitle(QCoreApplication::translate("Test_Form", "Form", nullptr));
        toolButton->setText(QCoreApplication::translate("Test_Form", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test_Form: public Ui_Test_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_FORM_H
