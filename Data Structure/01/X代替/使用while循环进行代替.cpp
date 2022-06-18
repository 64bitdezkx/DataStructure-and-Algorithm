#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout << "请输入字符串：" << endl;
    getline(cin, s);
    const auto num = s.size();
    int i=0;
    while (s[i] != '\0') {//字符串结束的标志是'\0'
        if (s[i] != ' ') {
            s[i] = 'X';
        }
        ++i;
    }


    cout << endl << s << endl;


    system("pause");
    return EXIT_SUCCESS;
}