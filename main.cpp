#include <iostream>
#include <string>

using namespace std;



//c++�����ֳ����Ķ��峣���ķ���

//1���곣��

#define Day 7

int main()
{

    cout << "һ�ܹ���: "<< Day << endl;

    //2��const���εı���
    const int month = 12;
    cout << "һ��һ����" << month << "���·�" << endl;

    //��������
    //�ڴ�ռ�ռ�����sizeof

    //������  2���ֽ�  -2^15-2^15-1
    short  num1 = 10;
    cout << num1 << endl;
    cout << sizeof(num1) << endl;

    //����  4���ֽ�  -2^31-2^31-1
    int  num2 = 10;
    cout << num2 << endl;
    cout << sizeof(num2) << endl;
    //������  windows4���ֽڣ�linux32λ4���ֽ� 64λ8���ֽ�  -2^31-2^31-1
    long num3 = 10;
    cout << num3 << endl;
    cout << sizeof(num3) << endl;

    //��������  8���ֽ�  -2^63-2^63-1
    long long  num4 = 10;
    cout << num4 << endl;
    cout << sizeof(num4) << endl;


    //������ float
    //˫���� double
    float f1 = 4.123444f;
    cout << "f1=" << f1 << endl;
    cout << "floatռ�õ��ڴ�ռ�" << sizeof(f1) << endl;
    double f2 = 4.223434;
        cout << "f2=" << f2 << endl;
    cout << "doubleռ�õ��ڴ�ռ�" << sizeof(f2) << endl;

    float a = 3e2;
    cout << a << endl;
    float b = 3e-2;
    cout << b << endl;

    //�ַ�����char
    char ch = 'a';   //�ַ�������˫����
    cout << ch << endl;
    cout << sizeof(ch) << endl; //�ַ�ռһ���ֽ�

    cout << (int)ch << endl; //ASCII 97


    //ת���ַ�
    //���з� \n
    cout << "hello word\n123";

    //��б�� \\

     cout << "\\" << endl;

     // ˮƽ�Ʊ�� \t ���ÿ��������������
     cout << "aaad\thelloword" << endl;
     cout << "aaaddd\thelloword" << endl;
     cout << "aad\thelloword" << endl;


     //�ַ����Ĵ���
     //1��C����ַ���
     char str[] = "hello world";
     cout << str << endl;

     //2.C++�����ַ���
     string str2 = "hello world";
     cout << str2 << endl;  //ע��C++�����ַ�����Ҫ��stringͷ�ļ�


     //bool��������
     bool flag = true;
     cout << flag << endl;

     flag = false;
     cout << flag << endl;

     cout << "������������ռ�õ��ڴ��СΪ��" << sizeof(bool) << endl;


     //���������
     //���õ���

     int x = 10;
     x++;
     cout << x << endl;

     //ǰ�õ���
     int y = 10;
     ++y;
     cout << y << endl;

     //����
     //���õ������ȼ�����ʽ���ٽ���++����
     int a2 = 10;
     int b2 = a2++ * 10;
     cout << b2 << endl;

     //ǰ�õ������ȼ���++���ټ�����ʽ
     int a3 = 10;
     int b3 = ++a3 * 10;
     cout << b3 << endl;


     //�߼������
     //�� !
     int m = 10;
     cout << !m << endl;
     cout << !!m << endl;

     //�߼��� && a&&b

     //�߼���  ||

     int x1 = 10;
     int y1 = 0;
     cout << (x1 || y1) << endl;

}

