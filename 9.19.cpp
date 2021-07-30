#include <string>
#include <list>
#include <iostream>

using namespace std;

int main(void)
{
    string temp;
    list<string> strs;
    while (cin >> temp){
        strs.insert(strs.end(),temp);
        strs.push_back(temp);   // 也就是说list 是支持push_back的
    }
     for(auto temp : strs){
         cout << temp << endl;
     }                               
}