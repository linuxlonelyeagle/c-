#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace  std;


int main(void)
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    for (auto temp = vec.rbegin(); temp != vec.rend(); temp++){
        cout << *temp <<  " ";
    }
    cout << endl;
    return 0;
}