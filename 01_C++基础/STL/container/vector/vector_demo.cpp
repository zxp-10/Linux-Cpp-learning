#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums;
    
    nums.push_back(6);
    nums.push_back(10);
    nums.push_back(11);
    for(auto n: nums)
    {
        cout<<n<<endl;
    }

    return 0;
}