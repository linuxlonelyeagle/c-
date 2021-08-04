#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <string>

using namespace std;

int main(void)
{
    vector<string> v =  {"hello","world","hello1","world1","hello2","world2"} ;
    multiset<string>  s ;
    copy(v.begin(),v.end(),inserter(s,s.end())) ;
    for (auto it : s){
        cout << it << " ";
    } 
    cout << endl;
    multiset<string> s1;
    copy(v.begin(),v.end(),back_inserter(s1));     //不合法，因为set 没有push_back
    
    for (auto it : s1){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}