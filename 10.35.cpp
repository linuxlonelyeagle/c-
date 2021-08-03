#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    for (auto it = vec.end()-1;; it--){
        cout << *it << " ";
        if (it == vec.begin()) break;
    }
    cout << endl;
    return 0;
}
