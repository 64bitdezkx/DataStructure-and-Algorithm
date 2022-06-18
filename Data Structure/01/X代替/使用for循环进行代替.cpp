#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main02()
{
    string s;
    cout << "请输入字符串：" << endl;
    getline(cin, s);
    const auto num=s.size();
    for (int i = 0; i <num ;i++) {//也可以直接定义i为 unsigned无符号类型
        if (s[i] != ' ') {
            s[i] = 'X';
        }
    }
    cout << endl << s << endl;


    system("pause");
    return EXIT_SUCCESS;
}