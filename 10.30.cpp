#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

bool f(int a, int b)
{
    if (a < b)
    return true;
    else
    return false;
}

int main(void)
{
    istream_iterator<int> in(cin),eof;
    vector<int> vec;
    while (in != eof){
        vec.push_back(*in++);
    }  
    for (auto i : vec){
        cout << i << " ";
    }
    cout << endl;
    sort(vec.begin(), vec.end(), f);

    cout << endl;
    return 0;
}
