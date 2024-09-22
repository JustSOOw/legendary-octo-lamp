#include "test_dialog.h"
#include "ui_test_dialog.h"

Test_Dialog::Test_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Test_Dialog)
{
    ui->setupUi(this);
}

Test_Dialog::~Test_Dialog()
{
    delete ui;
}
