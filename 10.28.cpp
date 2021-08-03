#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>

using namespace std;

int main(void)
{
    vector<string> vec = {"hello","woeld","hello1","world1","hello2","world2"};
    list<string> lis;
    deque<string> deq;
    for (auto i : vec){
       auto it = back_inserter(lis);
       *it = i;
    }  
    cout << "back_inserter" << endl;
    for (auto i : lis){
        cout << i << " ";
    }     
    cout << endl;
    
    for (auto i : vec){
        auto it = front_inserter(deq);
        *it = i;
    }
    
    cout << "front_inserter" << endl;
    for (auto i : deq){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}