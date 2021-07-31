#include <iostream>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> vec;  //空的
    auto it = back_inserter(vec);   //返回一个与该容器绑定的插入迭代器
    *it = 5201314;     // 当我们通过这个迭代器赋值的时候,会调用push_back
    fill_n(back_inserter(vec),5,520);
    for (auto temp : vec){
        cout << temp << " ";
    }
    cout << endl;
    
    return 0;
}