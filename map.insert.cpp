#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    map<string,int>  m = {{"hello",0}};
    auto it = m.insert({"yang",0});
    cout << it.first->second << endl;
    cout << (*it.first).first << endl;
    cout << it.second << endl;

    return 0;
}