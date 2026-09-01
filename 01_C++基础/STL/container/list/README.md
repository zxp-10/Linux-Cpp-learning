功能：将数据进行链式存储
链表的组成：链表由一系列结点组成
结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域
STL中的链表是一个双向循环链表
![alt text](image.png)

list的优点：
    采用动态存储分配，不会造成内存浪费和溢出；链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素
list的缺点：
    链表灵活，但是空间(指针域) 和 时间（遍历）额外耗费较大
STL中List和vector是两个最常被使用的容器，各有优缺点

list 插入和删除
    push_back(elem); 在容器尾部加入一个元素L.push_back(10);
    pop_back(); 删除容器中最后一个元素L.pop_back();
    push_front(elem); 在容器开头插入一个元素L.push_front(100);
    pop_front(); 从容器开头移除第一个元素L.pop_front();
    insert(pos,elem); 在pos位置插elem元素的拷贝，返回新数据的位置。L.insert(x, 1000);
    insert(pos,n,elem); 在pos位置插入n个elem数据，无返回值。
    insert(pos,beg,end); 在pos位置插入[beg,end)区间的数据，无返回值。
    clear(); 移除容器的所有数据L.clear();
    erase(beg,end); 删除[beg,end)区间的数据，返回下一个数据的位置。
    erase(pos); 删除pos位置的数据，返回下一个数据的位置。L.erase(x);
    remove(elem); 删除容器中所有与elem值匹配的元素。L.remove(10000);


list 数据存取
    front(); 返回第一个元素。L1.front()
    back(); 返回最后一个元素。L1.back()
list 反转和排序
    reverse(); 反转链表L.reverse();
    sort(); 链表排序L.sort(); //默认的排序规则 从小到大

