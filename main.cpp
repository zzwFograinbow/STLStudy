#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "string_study.h"
#include "deque_study.h"
void printVector(std::vector<int>&v);

void show(int val)
{
    std::cout<<val<<std::endl;
}

class person
{
public:
    person(std::string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    std::string m_name;
    int m_age;
};

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {



}

int main()
{
    std::cout<<"000"<<std::endl;
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::vector<int>::iterator it_begin;
    std::vector<int>::iterator it_end;
    it_begin = v.begin();
    it_end = v.end();

    while(it_begin != it_end)
    {
        std::cout<<*it_begin<<std::endl; //这里面用*表示取值，v.begin()是一个地址值，不是一个具体的数
        it_begin++;
    }

    for(std::vector<int>::iterator it = v.begin();it != v.end();it++)//std::vector<int>::iterator这是一个迭代器的定义，要用迭代器承接vector的地址值
    {
        std::cout<<*it<<std::endl;
    }

    std::for_each(v.begin(),v.end(), show);

    std::vector<person> v_person;    //这里构建的是以
    person p1("aaa",111);
    person p2("bbb",222);
    person p3("ccc",333);
    person p4("ddd",444);
    person p5("eee",555);

    v_person.push_back(p1);
    v_person.push_back(p2);
    v_person.push_back(p3);
    v_person.push_back(p4);
    v_person.push_back(p5);

    for(std::vector<person>::iterator it = v_person.begin();it != v_person.end();it++)
    {
        std::cout<<(*it).m_name<<" "<<(*it).m_age<<std::endl;
        std::cout<<it->m_name<<"  "<<it->m_age<<std::endl;
    }
    /*vector的构造方式*/

    std::vector<int> v1;                               //vector的无参调用
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    std::vector<int> v2(v1.begin(),v1.end());//区间方式进行构造
    printVector(v2);

    //std::cout<<*(v1.begin());

    std::vector<int> v3(10,100);             //n个elem的方式进行构造,前面的是个数，后面的是值
    printVector(v3);

    std::vector<int> v4(v3);                         //复制构造
    printVector(v4);

    /*vector的赋值操作*/
    //1、operator=
    std::vector<int>v11 = v1;
    printVector(v11);

    //2、assign 区间赋值
    std::vector<int> v22;
    v22.assign(v11.begin(),v11.end());
    printVector(v22);

    //3、assign n个elem赋值
    std::vector<int> v33;
    v33.assign(10,100);
    printVector(v33);

    /*vector容器的 大小和容量*/
    std::cout<<v1.empty()<<std::endl;
    std::cout<<v1.capacity()<<std::endl;
    std::cout<<v1.size()<<std::endl;

    /*vecotor容器的 插入和删除*/
    v1.pop_back();
    printVector(v1);

    std::vector<int>::iterator it = v1.begin();
    //it = v1.end();
    //v1.insert(it-1,999);
    //printVector(v1);

    v1.erase(it,it+3);
    printVector(v1);

    std::vector<int> vtext;
    int* pv = NULL;
    int num = 0;
    vtext.reserve(100000);
    for(int p = 0;p<100000;p++)
    {
        vtext.push_back(p);
        if(pv != &vtext[0]) //这段if代码是：判断系统开辟了多少次空间才满足这10w个数据
        {                   //创建了一个空指针，如果不指向第一个数据的内存，则强制指向，然后次数+1，则可获得指向的次数。
            pv = &vtext[0]; //如想要减少开辟次数，则用reserve().
            num++;
        }
    }
    std::cout<<num<<std::endl;

    std::cout<<vtext.capacity()<<std::endl;
    std::cout<<vtext.size()<<std::endl;

    vtext.resize(3);

    std::cout<<vtext.capacity()<<std::endl;
    std::cout<<vtext.size()<<std::endl;

    std::vector<int>(vtext).swap(vtext);
   // std::cout<<vtext.capacity()<<std::endl;
    //std::cout<<vtext.size()<<std::endl;

/*二维vector的使用方式！！！！！！！*/
    std::vector<std::vector<int>> matrix;
    std::vector<int> B;
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int ii = 0;ii<3;ii++)
    {
        for (int jj = 0; jj < 3; jj++) {
            B.push_back(m[ii][jj]);

        }
        matrix.push_back(B);
        B.clear();
    }
    std::cout<<"000"<<std::endl;
    std::cout<<"matrix:"<<matrix.size()<<std::endl;
    std::cout<<matrix[0].size()<<std::endl;

    std::string str[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    std::cout<<str[6]<<std::endl;


    /*String 学习*/
    Stringtext();

    /*deque 学习*/
    Dequetext();
    return 0;
}

void printVector(std::vector<int>&v)
{
    for(std::vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        std::cout<<*it<<" ";//std::endl;
    }
    std::cout<<std::endl;
}