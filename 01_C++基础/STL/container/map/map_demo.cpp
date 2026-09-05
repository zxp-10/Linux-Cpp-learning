#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;

    // 乱序插入10个key‑value，key乱序：72,98,52,54,46,75,96,95,2,50
    mp[72] = 1;
    mp[98] = 2;
    mp[52] = 3;
    mp[54] = 4;
    mp[46] = 5;
    mp[75] = 6;
    mp[96] = 7;
    mp[95] = 8;
    mp[2]  = 9;
    mp[50] = 10;

    // 范围for遍历
    for(auto &p : mp)
    {
        cout << p.first << " ";
    }
    cout << endl;

    return 0;
}