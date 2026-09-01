#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    for (int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < d.size(); i++) {
        cout << d.at(i) << " ";
    }
    cout << endl;
    cout << "front:" << d.front() << endl;//返回容器中第一个数据元素
    cout << "back:" << d.back() << endl;//返回容器中最后一个数据元素

    return 0;

}