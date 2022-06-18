#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//练习3.5:编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分隔开来。


//连接多个字符串的程序如下所示:
int main01()
{
    char IsY = 'Y';
    string s, result;
    cout << "请输入第一个字符串:" << endl;
    while (1) {
        cin >> s;
        result += s;

        cout << "是否继续输入：（Y/N）" << endl;
        cin >> IsY;
        if (IsY == 'y' || IsY == 'Y') {
            cout << "请输入下一个字符串" << endl;
            
        }
        else {
            break;//结束循环
        }
    }
    cout << "拼接之后的字符串是：" << result << endl;
    return 0;


    system("pause");
    return EXIT_SUCCESS;
}

//连接多个字符串并以空格分隔的程序如下所示:
int main() {

    char IsY = 'Y';
    string s, result;
    cout << "请输入第一个字符串:" << endl;
    while (1) {
        cin >> s;
        result += (s+" ");

        cout << "是否继续输入：（Y/N）" << endl;
        cin >> IsY;
        if (IsY == 'y' || IsY == 'Y') {
            cout << "请输入下一个字符串" << endl;

        }
        else {
            break;//结束循环
        }
    }
    cout << "拼接之后的字符串是：" << result << endl;
    return 0;


    system("pause");
    return EXIT_SUCCESS;
}