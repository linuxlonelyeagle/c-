#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;
int main(void)
{
    vector<string> vec_str1 = {"hello","world"};
    vector<char*> vec_str2 = {"hello","world"};
    auto i = equal(vec_str1.begin(),vec_str1.end(),vec_str2.begin());
    cout << i << endl;  // 这里i的值是1

    vector<string> vec_str3 = {"hello world"};
    i = equal(vec_str2.begin(),vec_str2.end(),vec_str3.begin());
    cout << i << endl;     //这里的值是0 
    //总结:也就是说equal函数返回bool值,如果相等就是true,如果不相等就是false
    return 0;
}
