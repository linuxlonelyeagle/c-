#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(void)
{
    string temp;
    deque<string> strs;
    while (cin >> temp){
        strs.push_back(temp);
    }
    
    for(auto temp : strs){
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}