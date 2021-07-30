#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
    vector<int> vec_int(10,0);
    fill(vec_int.begin(),vec_int.end(),520);
    for (auto temp : vec_int){
        cout << temp << endl;
    }
    fill_n(vec_int.begin(),vec_int.size(),1314);
    for (auto temp : vec_int){
        cout << temp << endl;
    }
    
    return 0;
}