#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main01() //使用范围for语句进行循环
{
    string s;
    cout << "请输入字符串：" << endl;
    getline(cin, s);

    for (auto& c : s) {//判断c的类型实际上就是char
        c = 'X';

    }
    cout << endl << s << endl;

    system("pause");
    return EXIT_SUCCESS;
}
