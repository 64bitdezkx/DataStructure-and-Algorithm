#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
//练习3.10:编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。
int main(){
    
        string s;
        cout << "请输入字符串：" << endl;
        getline(cin, s);
        const auto num = s.size();
        for (int i = 0; i < num; i++) {//也可以直接定义i为 unsigned无符号类型
            if (!ispunct(s[i])) {
                cout << s[i];
            }
        }

            cout << endl;
            system("pause");
            return EXIT_SUCCESS;
}
  