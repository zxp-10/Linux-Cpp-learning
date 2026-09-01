#include <iostream>
#include <list>

using namespace std;
void printList(const list<int>& L)
{
    for (int num : L)
    {
        cout << num << " ";
    }
    cout << endl;
}


int main()
{
    // 1. 创建list
    list<int> L;

    // =========================
    // 插入操作
    // =========================

    // 尾部插入
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);

    cout << "push_back后: ";
    printList(L);


    // 头部插入
    L.push_front(5);

    cout << "push_front后: ";
    printList(L);



    // insert(pos, elem)
    // 在第二个位置插入100

    auto it = L.begin();
    ++it;    // 指向第二个元素

    L.insert(it, 100);

    cout << "insert后: ";
    printList(L);



    // =========================
    // 删除操作
    // =========================

    // 删除尾部元素
    L.pop_back();

    cout << "pop_back后: ";
    printList(L);


    // 删除头部元素
    L.pop_front();

    cout << "pop_front后: ";
    printList(L);



    // erase删除指定位置

    it = L.begin();

    L.erase(it);

    cout << "erase后: ";
    printList(L);



    // 删除指定值
    L.remove(100);

    cout << "remove后: ";
    printList(L);



    // =========================
    // 数据访问
    // =========================

    if (!L.empty())
    {
        cout << "第一个元素: "
             << L.front()
             << endl;


        cout << "最后一个元素: "
             << L.back()
             << endl;
    }



    // =========================
    // 反转和排序
    // =========================


    L.push_back(50);
    L.push_back(15);
    L.push_back(40);


    cout << "排序前: ";
    printList(L);


    // 排序
    L.sort();

    cout << "排序后: ";
    printList(L);



    // 反转

    L.reverse();

    cout << "反转后: ";
    printList(L);



    return 0;
}