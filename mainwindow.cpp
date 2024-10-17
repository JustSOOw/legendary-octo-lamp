/*
 * @Author: Furdow wang22338014@gmail.com
 * @Date: 2024-09-08 16:26:34
 * @LastEditors: Furdow wang22338014@gmail.com
 * @LastEditTime: 2024-10-17 19:25:19
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
#include "QDate"
#include "QByteArray"


 QVariant dataPlus(QVariant a, QVariant b);
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
        ui->setupUi(this);

//     this->move(100,100);

//     QPushButton* Bta=new QPushButton(this);
//     Bta->move(10,10);
//     Bta->setFixedSize(100,100);

//     QPushButton* Btb=new QPushButton(Bta);
//     Btb->move(10,10);
//     Btb->setFixedSize(50,50);
    
//     QPushButton *Btc=new QPushButton(Btb);
//     Btc->move(10,10);
//     Btc->setFixedSize(25,25);

//     #if 1
//   //创建窗口对象时没有指定父对象，显示一个独立的窗口
//     Test_Form* w=new Test_Form() ;
//     w->show();

//     #else
//     //指定父对象，不用调用show()方法就显示在同一个窗口
//     Test_Form* w=new Test_Form(this);
//     #endif

//     #if 0
//     //非模态显示
//     //Dialog的父类与当前类无关，显示需要调用showhand()方法
//     Test_Dialog* d=new Test_Dialog();
//     d->show();
//     #else
//     //模态显示,exec()
//     //阻塞程序执行，直到对话框关闭
//     Test_Dialog* d=new Test_Dialog(this);
//     d->exec();
//     #endif

//     int value =dataPlus(10,20).toInt();
//     QString str =dataPlus("hello","younet").toString();

//     qDebug()<<"int value"<<value;
//     qDebug()<<"string value"<<str;

//     person p;
//     p.id=1;
//     p.name="wang";
    
//     #if 1
//         QVariant var;
//         var.setValue(p);
//     #else
//         QVariant var=QVariant::fromValue(p);
//     #endif

//     //取出v的值
//     if(var.canConvert<person>())
//     {
//         person p2=var.value<person>();
//         qDebug()<<"id:"<<p2.id<<"name:"<<p2.name;
//     }
  
  
  
  
//   qDebug()<<"Date:"<<QDate::currentDate();
//   qDebug()<<"Types:"<<QString("String")<<QChar('x')<<QRect(0,10,50,40); //QRect(0,10,50,40)：创建一个矩形对象，定义了左上角坐标为 (0, 10)，宽度为 50，高度为 40
//   qDebug()<<"Custom coordinate type:";
/*** 
  //QByteArray类型构造函数
  QByteArray qbytearray();
  //如果size==-1,函数内部自动计算字符串长度，，计算方式为strlen(data)
  QByteArray::QByteArray(const char *data,int size = -1)
  //构造一个长度为size个字节，并且每个直接都为ch的字节数组
  QByteArray::QByteArray(int size,char ch)

  //尾部追加数据
  QByteArray &QByteArray::append(const QByteArray &ba)
  void QByteArray::push_back(const QByteArray &other)
  //从头部添加数据
  QByteArray &QByteArray::prepend(const QByteArray &ba)
  void QByteArray::push_front(const QByteArray &other)  

  //插入数据
  void QByteArray::insert(int pos,const QByteArray &ba)
  //移除数据
  void QByteArray::remove(int pos,int len)
  //清空数据
  void QByteArray::clear()


  //字符串查找和判断(contains)，返回true或false
  bool QByteArray::contains(const QByteArray &ba)const
  bool QBteArray::contains(const char *ba)const
//判断字节数组是否以ba开头（startsWith)
  bool QByteArray::startsWith(const QByteArray &ba)const
  //判断字节数组是否以ba结尾（endsWith)
  bool QByteArray::endsWith(const QByteArray &ba)const



  //返回字节数组对象中字符的个数(length,size,count)
  int QByteArray::length()const
  int QByteArray::size()const
  int QByteArray::count()const

  //返回字节数组对象中，字符串ba出现的次数
  int QByteArray::count(const QByteArray &ba)const
  int QByteArray::count(const char *ba)const


//setNum系列函数：将指定数值（int、short、qlonglong、float、double）转换为基于特定进制（默认为10进制）或指定格式的字符串，并设置当前QByteArray的内容。
//number系列静态函数：功能与setNum类似，但返回一个新的QByteArray对象，而不是修改现有的对象。
  QByteArray &QByteArray::setNum(int n, int base = 10);
QByteArray &QByteArray::setNum(short n, int base = 10);
QByteArray &QByteArray::setNum(qlonglong n, int base = 10);
QByteArray &QByteArray::setNum(float n, char f = 'g', int prec = 6);//将浮点数 n 转换为字节数组。f 指定格式（如 'g' 表示通用格式），prec 指定精度。
QByteArray &QByteArray::setNum(double n, char f = 'g', int prec = 6);
[static] QByteArray QByteArray::number(int n, int base = 10);
[static] QByteArray QByteArray::number(qlonglong n, int base = 10);
[static] QByteArray QByteArray::number(double n, char f = 'g', int prec = 6);


// QByteArray -> int, short, long, float, double
int QByteArray::toInt(bool *ok = Q_NULLPTR, int base = 10) const;   //这是一个指向 bool 类型的指针，默认为空指针（Q_NULLPTR）。通常，这个指针用于指示函数的执行是否成功

//QString和QByteArray差不多

//std::string转换为QString
[static]QString QString::fromStdString(const std::string &str)
//QString转换为std::string
std::string QString::toStdString() const;

//QString->QByteArray   //常用toUtf8()
//转换为utf-8编码格式的字符串
QByteArray QString::toUtf8() const;

//字符转大写，转小写,toUpper(),toLower()
QByteArray QString::toUpper() const;
QByteArray QString::toLower() const;

//字符拼接，arg()
QString QString::arg(const QString &a, 
          int fieldWidth = 0, 
          QChar fillChar = QLatin1Char( ' ' )) const;
QString QString::arg(int a, int fieldWidth = 0, 
          int base = 10, 
          QChar fillChar = QLatin1Char( ' ' )) const;

int i;                // 假设该变量表示当前文件的编号
int total;            // 假设该变量表示文件的总个数
QString fileName;     // 假设该变量表示当前文件的名字
// 使用以上三个变量拼接一个动态字符串
QString status = QString("Processing file %1 of %2: %3")
                  .arg(i).arg(total).arg(fileName);


// 使用迭代器
iterator QString::begin();
iterator QString::end();

// 使用数组的方式进行遍历
// i的取值范围 0 <= position < size()
const QChar QString::at(int position) const
const QChar QString::operator[](int position) const;

####QVariant类型######

//标准类型转换为QVariant类型
QVariant::QVariant(int val)
QVariant::QVariant(bool val)
QVariant::QVariant(double val)
QVariant::QVariant(const QString &val)
QVariant::QVariant(const QString &val)

//判断QVariant中封装的实际数据类型
Type QVariant::type() const;

//通过调用 QVariant::type() 函数来检查 QVariant 中存储的数据类型，返回的结果是 QVariant::Type 枚举中的一个值
QVariant variant1 = 42; // 存储一个int类型
    QVariant variant2 = QString("Hello"); // 存储一个QString类型

    // 获取存储的数据类型
    QVariant::Type type1 = variant1.type();
    QVariant::Type type2 = variant2.type();

#####自定义类型######
    //自定义类型封装为QVariant类型，使用Q_DECLARE_METATYPE(Type)宏定义再头文件下面
    //第一步在头文件中声明
         // *.h
     struct MyTest
     {
         int id;
         QString name;
     };
     // 自定义类型注册
     Q_DECLARE_METATYPE(MyTest)

      //第二步在源文件中实现
       MyTest t;
       t.name = "张三丰";
       t.num = 666;
       // 值的封装
       QVariant vt = QVariant::fromValue(t);

       // 值的读取
       if(vt.canConvert<MyTest>())
       {
           MyTest t = vt.value<MyTest>();
           qDebug() << "name: " << t.name << ", num: " << t.num;
       }


       ####QPoint######
       //构造函数，构造一个原点，（0,0）
       QPoint::QPoint();
       //参数为x轴坐标，y轴坐标
       QPoint::QPoint(int xpos,int ypos);

       //设置x轴坐标，y轴坐标
       void QPoint::setX(int xpos);
       void QPoint::setY(int ypos);

       //获取x轴坐标，Y轴坐标
       int QPoint::x() const;
       int QPoint::y() const;
       //获取x轴坐标，y轴坐标的引用
       int &QPoint::rx() const;
       int &QPoint::ry() const;

       ######QLine（一个直线类）#####
       //够着一条直线，通过两个坐标点
       QLine::QLine(const QPoint &p1,const QPoint &p2);
       //从（x1,y1）到（x2,y2）
       QLine::QLine(int x1,int y1,int x2,int y2)


       //给直线对象设置坐标点
       void QLine::setPoints(const QPoint &p1,const QPoint &p2)
       //起始点（x1,y1),终点（x2,y2）
       void QLine::setLine(int x1,int y1,int x2,int y2);
       //设置直线的起点坐标
       void QLine::setP1(const QPint &p1);
       //设置直线的终点坐标
       void QLine::setP2(const QPint &p2);
       //返回直线的起点坐标
       QPoint QLine::p1() const;
       //返回直线的终点坐标
       QPoint QLine::p2() const;
       //返回直线的中心点坐标
       QPoint QLine::center() const;
       //返回直线的起始点坐标
       QPoint QLine::x1() const;
       QPoint QLine::y1() const;
       //返回直线的终点坐标
       QPoint QLine::x2() const;
       QPoint QLine::y2() const;
       //用给定的坐标点平移这条直线
       void QLine::translate(const QPoint &offset);
       void QLine::translate(int dx,int dy);
       //用给定的坐标点平移这条直线，返回平移之后的坐标点
       QPoint QLine::translated(const QPoint &offset) const;
       QPoint QLine::translated(int dx,int dy) const;
       //指向对象进行比较
       bool QLine::operator==(const QLine &line) const;
       bool QLine::operator!=(const QLine &line) const;


       ***QSize***
       //构造函数
       QSize::QSize();
       QSize::QSize(int width,int height);

       //设置宽度,设置宽度
       void QSize::setWidth(int width)
       //得到宽度，高度
       int QSize::width()  const;
       int QSize::height() const;
       //得到宽度和高度的应用
       int &QSize::rwidth();
       int &QSize::rheight(); 



      







  ***/

 //QT5信号槽的连接方式
 //常见指针函数，适合具有参数的信号槽连接
 void (girlfriend:: *gfboint)()=&girlfriend::hungry;
 void (girlfriend::*gfpoint)(QString)=&girlfriend::hungry;
 M_me=new me;       //me *M_me=new me;..  #分开写看不明白了
 G_gf=new girlfriend;
 connect(G_gf,gfpoint,M_me,&me::eat);
 connect(G_gf,gfpoint,this,&MainWindow::eatSlot);
 connect(ui->hungry,&QPushButton::clicked,this,&MainWindow::hungrySlot);
 


/*** Lambda表达式 ***/
/* 
  [capture](pargams) opt -> ret{body;};
    capture:捕获外部变量，
    params:参数列表，
    opt: 函数选项
    ret: 返回值类型
    body: 函数体

    [] :不捕捉任何变量
    [&] :捕获外部变量，并作为引用在函数体内使用（按引用描述）
    [=] :捕获外部变量，并作为值在函数体内使用（按值描述） //拷贝的副本在匿名函数体内是只读的
    [=, &x] :捕获外部变量，并作为值在函数体内使用，并按照引用捕获外部变量x
    [bar] :按值捕获bar变量，同时不捕获其他变量
    [&bar] :按值捕获bar变量，同时捕获其他变量
    [this] :捕获当前类中的this指针
           *让lambda表达式拥有和当前类成员函数同样的访问权限
           *如果已经是用了&或者=,默认添加此选项

    opt选项：
      mutable：可以修改按值传递进来的拷贝（不会修改值本身）
      exception: 指定函数抛出的异常，如果抛出整数类型的异常，可以使用throw()
*/
//设置匿名函数
[](){
  qDebug()<<"jjjj";
};
//调用匿名函数
int a=100,b=200,c=300;
[&](){
  qDebug()<<a+b+c;
}();
//值拷贝的方式使用外部数据
[=]()mutable{
  //拷贝的外部数据在函数体内部是只读的
  qDebug()<<"a+1"<<a++<< ",b+c="<<b+c;
}();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::hungrySlot()
{
    emit G_gf->hungry();
    emit G_gf->hungry("I'm hungry!");
   
}

void MainWindow::eatSlot()
{
  printf("drunk oiled water!!\n");
}

// QVariant MainWindow::dataPlus(QVariant a, QVariant b)
// {
//     QVariant result;
//     if(a.typeId()==QVariant::Int && b.typeId()==QVariant::Int)
//     {
//         result=a.toInt()+b.toInt();
//     }
//     else if (a.typeId() == QVariant::String && b.typeId() == QVariant::String)
//     {
//         result = a.toString() + b.toString();
//     }
//     else
//     {
//         // 处理其他类型
//     }


//     return result;

// }
  
  

