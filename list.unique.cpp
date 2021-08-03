#include <iostream>
#include <forward_list>
using namespace std;

int main(void)
{

    forward_list<int> list = {1,1,2};
    list.unique();  // 返回void 
    for (auto it = list.begin(); it != list.end(); it++){
        cout << *it << " ";
    }      // 输出 1 2
    cout << endl;
    list = {1,2,1};
    list.unique();
    for (auto it = list.begin(); it != list.end(); it++){
        cout << *it << " ";    //输出1 2 1 
    }
    cout << endl;     

    return 0;
}