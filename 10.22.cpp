#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool f(string str)
{
    if (str.size()>=6)
    return true;
    return false;
}

int main(void)
{
    vector<string> vec_str = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    auto g = bind(f,_1); 
    sort(vec_str.begin(),vec_str.end(),g);
    for (auto temp : vec_str){
        cout << temp << " ";
    }     
    cout << endl;
    return 0;
}
