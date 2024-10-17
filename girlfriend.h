/*
 * @Author: Furdow wang22338014@gmail.com
 * @Date: 2024-10-10 17:39:11
 * @LastEditors: Furdow wang22338014@gmail.com
 * @LastEditTime: 2024-10-10 22:29:10
 * @FilePath: \QTF\girlfriend.h
 * @Description: 
 * 
 * Copyright (c) 2024 by Furdow, All Rights Reserved. 
 */
#ifndef GIRLFRIEND_H
#define GIRLFRIEND_H

#include <QObject>
#include <QString>

class girlfriend : public QObject
{
    Q_OBJECT
public:
    explicit girlfriend(QObject *parent = nullptr);

signals:
    void hungry();
    void hungry(QString MSG);   //重载函数
};

#endif // GIRLFRIEND_H
