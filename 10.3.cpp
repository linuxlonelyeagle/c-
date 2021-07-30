#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> vec_int = {1,2,3,4,5,6,7,8,9,10};
    int sum = accumulate(vec_int.begin(),vec_int.end(),0);
    cout<< sum << endl;    
    return 0;
}