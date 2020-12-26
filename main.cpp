#include <iostream>
#include <string>

using namespace std;



//c++中两种常见的定义常量的方法

//1、宏常量

#define Day 7

int main()
{

    cout << "一周共有: "<< Day << endl;

    //2、const修饰的变量
    const int month = 12;
    cout << "一年一共有" << month << "个月份" << endl;

    //数据类型
    //内存空间占用情况sizeof

    //短整型  2个字节  -2^15-2^15-1
    short  num1 = 10;
    cout << num1 << endl;
    cout << sizeof(num1) << endl;

    //整型  4个字节  -2^31-2^31-1
    int  num2 = 10;
    cout << num2 << endl;
    cout << sizeof(num2) << endl;
    //长整型  windows4个字节，linux32位4个字节 64位8个字节  -2^31-2^31-1
    long num3 = 10;
    cout << num3 << endl;
    cout << sizeof(num3) << endl;

    //长长整型  8个字节  -2^63-2^63-1
    long long  num4 = 10;
    cout << num4 << endl;
    cout << sizeof(num4) << endl;


    //单精度 float
    //双精度 double
    float f1 = 4.123444f;
    cout << "f1=" << f1 << endl;
    cout << "float占用的内存空间" << sizeof(f1) << endl;
    double f2 = 4.223434;
        cout << "f2=" << f2 << endl;
    cout << "double占用的内存空间" << sizeof(f2) << endl;

    float a = 3e2;
    cout << a << endl;
    float b = 3e-2;
    cout << b << endl;

    //字符变量char
    char ch = 'a';   //字符不能用双引号
    cout << ch << endl;
    cout << sizeof(ch) << endl; //字符占一个字节

    cout << (int)ch << endl; //ASCII 97


    //转义字符
    //换行符 \n
    cout << "hello word\n123";

    //反斜杠 \\

     cout << "\\" << endl;

     // 水平制表符 \t 作用可以整齐输出数据
     cout << "aaad\thelloword" << endl;
     cout << "aaaddd\thelloword" << endl;
     cout << "aad\thelloword" << endl;


     //字符串的创建
     //1、C风格字符串
     char str[] = "hello world";
     cout << str << endl;

     //2.C++风格的字符串
     string str2 = "hello world";
     cout << str2 << endl;  //注意C++风格的字符串需要加string头文件


     //bool类型数据
     bool flag = true;
     cout << flag << endl;

     flag = false;
     cout << flag << endl;

     cout << "布尔类型数据占用的内存大小为：" << sizeof(bool) << endl;


     //算术运算符
     //后置递增

     int x = 10;
     x++;
     cout << x << endl;

     //前置递增
     int y = 10;
     ++y;
     cout << y << endl;

     //区别
     //后置递增，先计算表达式，再进行++操作
     int a2 = 10;
     int b2 = a2++ * 10;
     cout << b2 << endl;

     //前置递增，先计算++，再计算表达式
     int a3 = 10;
     int b3 = ++a3 * 10;
     cout << b3 << endl;


     //逻辑运算符
     //非 !
     int m = 10;
     cout << !m << endl;
     cout << !!m << endl;

     //逻辑与 && a&&b

     //逻辑或  ||

     int x1 = 10;
     int y1 = 0;
     cout << (x1 || y1) << endl;

}

