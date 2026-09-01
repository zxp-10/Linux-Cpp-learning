双端数组，可以对头部进行插入和删除
deque与vector区别：
vector对于头部的插入删除效率低，数据量越大，效率越低；deque相对而言，对头部的插入删除速度回比vector快；vector访问元素时的速度会比deque快,这和两者内部实现有关。
![alt text](image.png)

两端插入操作：

    push_back(elem); 在容器尾部添加一个数据d.push_back(10);
    push_front(elem); 在容器头部插入一个数据d.push_front(100);
    pop_back(); 删除容器最后一个数据d.pop_back();
    pop_front(); 删除容器第一个数据d.pop_front();

指定位置操作：

    insert(pos,elem); 在pos位置插入一个elem元素的拷贝，返回新数据的位置。d.insert(d.begin(), 1000);
    insert(pos,n,elem); 在pos位置插入n个elem数据，无返回值。d.insert(d.begin(), 2,10000);
    insert(pos,beg,end); 在pos位置插入[beg,end)区间的数据，无返回值。d.insert(d.begin(), d2.begin(), d2.end());
    clear(); 清空容器的所有数据d.clear();
    erase(beg,end); 删除[beg,end)区间的数据，返回下一个数据的位置。d.erase(d.begin(), d.end());
    erase(pos); 删除pos位置的数据，返回下一个数据的位置。d.erase(d.begin());
