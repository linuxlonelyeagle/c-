#include <iostream>
#include <numeric>
#include <utility>

using namespace std;

int main(void)
{
    //1 
    pair<string, int> it1("hello", 1);
    cout << it1.first << " " << it1.second <<endl;
    pair<string, int> it2 = {"hello", 2};
    cout << it2.first << " " << it2.second << endl;
    auto it3 = make_pair("hello",3);
    cout << it3.first << " " << it3.second << endl;

    return 0;
}