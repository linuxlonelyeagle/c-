#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
    int a1[] = {1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1)/sizeof(int)];
    auto ret = copy(begin(a1),end(a1),a2);
    for (auto i : a2){
        cout << i << " ";
    }
    cout << endl;
    
    cout << ret << " " << a2+8 << endl;   // ret 是插入的数组的最后一个元素的后面的一个地址
    return 0;
}