#include <iostream>
using namespace std;
#include "string_study.h"
#include <string>
int Stringtext()
{
    string s1 = "hello world"; // 默认构造
    cout<<s1<<endl;


    char* strt = "hello world";//C语言方式构造string
    string s2(strt);
    cout<<s2<<endl;

    string s3;
    s3.assign(s2,5);
    cout<<s3<<endl;

    string s4 = "i lob";
    s4.append(" ");
    s4.append(s2,0,4);//将s2的0-4位置放到s2后面
    cout<<s4<<endl;
    return 0;
}