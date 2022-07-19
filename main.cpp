#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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
int main()
{
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

    /*vector 容器的大小和容量*/
    std::cout<<v1.empty()<<std::endl;
    std::cout<<v1.capacity()<<std::endl;
    std::cout<<v1.size()<<std::endl;
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