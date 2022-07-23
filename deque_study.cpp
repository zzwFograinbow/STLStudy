//
// Created by Administrator on 2022/7/22 0022.
//
#include <iostream>
using namespace std;
#include <deque>
#include "deque_study.h"
#include <algorithm>

void showDeque(const deque<int> &d)
{
    for(deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
        cout<<(*it)<<",";
    }
    cout<<endl;
}
void text01() //deque的构造函数
{
    deque<int>d1;
    for(int i = 0;i<10;i++)
    {
        d1.push_back(i);
    }          //直接构造

    deque<int>d2(d1.begin(),d1.end());
    deque<int>d3(10,100);
    deque<int>d4(d3);

    /*deque 的赋值操作*/
    deque<int> d5;
    d5.assign(10,100);

    /*deque 排序*/
    d1.push_back(100);
    d1.push_front(60);

    showDeque(d1);
    sort(d1.begin(),d1.end());



    showDeque(d1);
    showDeque(d2);
    showDeque(d3);
    showDeque(d4);
}
int Dequetext()
{
    text01();
    return 0;
}