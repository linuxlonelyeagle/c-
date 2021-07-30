#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> vec_int(5,520);
    replace(vec_int.begin(),vec_int.end(),520,1314);
    for (auto temp : vec_int){
        cout << temp << " "; 
    }
    cout << endl;

    replace_copy(vec_int.begin(),vec_int.end(),back_inserter(vec_int),1314,520);
    for (auto temp : vec_int){
        cout << temp << " ";
    }
    cout << endl;
    
    return 0;
}
