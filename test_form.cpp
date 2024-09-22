#include "test_form.h"
#include "ui_test_form.h"

Test_Form::Test_Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Test_Form)
{
    ui->setupUi(this);
}

Test_Form::~Test_Form()
{
    delete ui;
}
