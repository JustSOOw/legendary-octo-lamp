#ifndef TEST_FORM_H
#define TEST_FORM_H

#include <QWidget>

namespace Ui {
class Test_Form;
}

class Test_Form : public QWidget
{
    Q_OBJECT

public:
    explicit Test_Form(QWidget *parent = nullptr);
    ~Test_Form();

private:
    Ui::Test_Form *ui;
};

#endif // TEST_FORM_H
