set/multiset属于关联式容器，底层结构使用二叉树实现的。
set/multiset的特点是：所有的元素在插入时会自动被排序。而set与multiset容器的区别就是：set容器中不允许有重复的元素，而multiset允许容器中有重复的元素。

set st 默认构造函数set<int> s1;
insert(elem) 在容器中插入元素s1.insert(11);
clear() 清除所有元素s1.clear();
erase(pos) 删除pos迭代器所指的元素，返回下一个元素的迭代器
erase(beg,end) 删除区间[beg,end)的所有元素，返回下一个元素的迭代器s1.erase(s1.begin(), s1.end());
erase(elem) 删除容器中值为elem的元s1.erase(30);
