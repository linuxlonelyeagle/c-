#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> vec = {0,1,2,3,4,5,0,1,2,3};
    auto it = find(vec.rbegin(), vec.rend() , 0);
    if (it == vec.rend()) {
        cout << "没有找到" << endl;
        return 0;
    }
    auto tp = it.base();    //把反向第迭代器转换成普通迭代器
    for (auto i = tp; i != vec.end(); i++){
        cout << *i << " ";
    }    
    cout << endl;
    return 0;
}