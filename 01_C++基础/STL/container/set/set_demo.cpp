#include <iostream>
#include <windows.h>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);   // 设置控制台输出为UTF‑8
	multiset<int> ms;
	ms.insert(10);
	ms.insert(20);
	ms.insert(10);
	ms.insert(20);
	ms.insert(30);
	ms.insert(50);
	//内部排序后：{10,10,20,20,30,50}

	auto pos = ms.find(20);
	if(pos != ms.end())
	{
	    cout<< "find拿到的值：" << *pos <<endl; //输出20，是可以找到的
	}

	int i=0;
	// 修正：iterator 和 it之间加空格
	for(multiset<int>::iterator it=ms.begin(); it != ms.find(20); it++,i++){}

	cout<< "第一个20的下标位置：" << i <<endl; //输出2
	return 0;
}