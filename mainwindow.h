/*
 * @Author: Furdow wang22338014@gmail.com
 * @Date: 2024-09-08 16:26:34
 * @LastEditors: Furdow wang22338014@gmail.com
 * @LastEditTime: 2024-09-25 20:21:17
 * @FilePath: \QTF\mainwindow.h
 * @Description: 
 * 
 * Copyright (c) 2024 by Furdow, All Rights Reserved. 
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "me.h"
#include "girlfriend.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

/// @brief 
/// @param  
/// @return 
struct person{
    int id;
    QString name;
};
Q_DECLARE_METATYPE(person);

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    //添加hungry按钮曹函数
    void hungrySlot();
    void eatSlot();
    QVariant dataPlus(QVariant a, QVariant b);


private:
    Ui::MainWindow *ui;
    me *M_me;
    girlfriend *G_gf;
};
#endif // MAINWINDOW_H
