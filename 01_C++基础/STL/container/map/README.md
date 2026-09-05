map<键类型, 值类型> 变量名;

键key唯一，不允许重复；通过key快速找到对应的value。
底层：红黑树（平衡二叉搜索树）元素会自动按照 key 升序排序
map<T,T> m map默认构造函数map<int, int> m;
map(const map &mp) 拷贝构造函数map<int, int> m2(m);
map& operator=(const map &mp) 重载等号操作符m1 = m2;