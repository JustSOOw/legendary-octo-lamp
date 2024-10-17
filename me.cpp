/*
 * @Author: Furdow wang22338014@gmail.com
 * @Date: 2024-10-10 17:40:39
 * @LastEditors: Furdow wang22338014@gmail.com
 * @LastEditTime: 2024-10-10 18:14:30
 * @FilePath: \QTF\me.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by Furdow, All Rights Reserved. 
 */
#include "me.h"
#include <QDebug>

me::me(QObject *parent)
    : QObject{parent}
{}



void me::eat()
{
    qDebug()<<"I am eating";

}
