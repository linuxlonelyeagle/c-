#include <iostream>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main(void)
{
    multiset<string> mu_set ={"hello","world","hello1","world1"};
    vector<string> vec;
    copy(mu_set.begin(),mu_set.end(),inserter(vec,vec.end())) ;
    for  (auto it : vec){
        cout << it << " ";
    }   
    cout << endl;
    vector<string> v;
    copy(mu_set.begin(),mu_set.end(),back_inserter(v));
    for (auto it : v){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}