vector与普通数组区别是不同之处在于数组是静态空间，而vector可以动态扩展（并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间）



vector v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
vector(n, elem); //构造函数将n个elem拷贝给本身。
vector(const vector &vec); //拷贝构造函数
v.empty(); 判断容器是否为空
v.capacity(); 容器的容量
v.size(); 返回容器中元素的个数

v.push_back(ele); 尾部插入元素ele
v.pop_back(); 删除最后一个元素
v.insert(const_iterator pos, ele); 迭代器指向位置pos插入元素ele
v.insert(const_iterator pos, int count,ele); 迭代器指向位置pos插入count个元素ele
v.erase(const_iterator pos); 删除迭代器指向的元素
v.erase(const_iterator start, const_iterator end); 删除迭代器从start到end之间的元素
v.clear(); 删除容器中所有元素

swap(v); 将v与本身的元素互换

