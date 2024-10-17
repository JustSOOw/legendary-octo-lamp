/*
 * @Author: Furdow wang22338014@gmail.com
 * @Date: 2024-09-08 16:26:34
 * @LastEditors: Furdow wang22338014@gmail.com
 * @LastEditTime: 2024-10-10 20:48:56
 * @FilePath: \QTF\main.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Furdow, All Rights Reserved. 
 */
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    printf("Hello, World!\n");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}

