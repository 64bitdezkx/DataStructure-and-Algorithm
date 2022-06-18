#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
//练习3.10:编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。
int main01()
{
    string s;
    cout << "请输入字符串：" << endl;
    getline(cin, s);

    for (auto& c : s) {
        if (!ispunct(c)) {
            cout << c ;
        }
    }
    cout << endl;

    system("pause");
    return EXIT_SUCCESS;
}