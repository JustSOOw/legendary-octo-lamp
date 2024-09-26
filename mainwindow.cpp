/*
 * @Author: Furdow wang22338014@gmail.com
 * @Date: 2024-09-08 16:26:34
 * @LastEditors: Furdow wang22338014@gmail.com
 * @LastEditTime: 2024-09-26 18:28:00
 * @FilePath: \QTF\mainwindow.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Furdow, All Rights Reserved. 
 */
#include <iostream>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "test_form.h"
#include "test_dialog.h"
#include "QPushButton"
#include "QDebug"

 QVariant dataPlus(QVariant a, QVariant b);
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->move(100,100);

    QPushButton* Bta=new QPushButton(this);
    Bta->move(10,10);
    Bta->setFixedSize(100,100);

    QPushButton* Btb=new QPushButton(Bta);
    Btb->move(10,10);
    Btb->setFixedSize(50,50);
    
    QPushButton *Btc=new QPushButton(Btb);
    Btc->move(10,10);
    Btc->setFixedSize(25,25);

    #if 1
  //创建窗口对象时没有指定父对象，显示一个独立的窗口
    Test_Form* w=new Test_Form() ;
    w->show();

    #else
    //指定父对象，不用调用show()方法就显示在同一个窗口
    Test_Form* w=new Test_Form(this);
    #endif

    #if 0
    //非模态显示
    //Dialog的父类与当前类无关，显示需要调用showhand()方法
    Test_Dialog* d=new Test_Dialog();
    d->show();
    #else
    //模态显示,exec()
    //阻塞程序执行，直到对话框关闭
    Test_Dialog* d=new Test_Dialog(this);
    d->exec();
    #endif

    int value =dataPlus(10,20).toInt();
    QString str =dataPlus("hello","younet").toString();

    qDebug()<<"int value"<<value;
    qDebug()<<"string value"<<str;

    person p;
    p.id=1;
    p.name="wang";
    
    #if 1
        QVariant var;
        var.setValue(p);
    #else
        QVariant var=QVariant::fromValue(p);
    #endif

    //取出v的值
    if(var.canConvert<person>())
    {
        person p2=var.value<person>();
        qDebug()<<"id:"<<p2.id<<"name:"<<p2.name;
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

QVariant MainWindow::dataPlus(QVariant a, QVariant b)
{
    QVariant result;
    if(a.type()==QVariant::Int && b.type()==QVariant::Int)
    {
        result=a.toInt()+b.toInt();
    }
    else if (a.type() == QVariant::String && b.type() == QVariant::String)
    {
        result = a.toString() + b.toString();
    }
    else
    {
        // 处理其他类型
    }


    return result;

}
