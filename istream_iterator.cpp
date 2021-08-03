#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

int main(void)
{   //当程序跑起来的时候，我们可以输入值
    istream_iterator<int> in(cin),eof;
    cout << accumulate(in,eof,0) << endl;
    return 0;
}