#include <iostream>
#include <string>
#include <memory>

using namespace std;


int main(void)
{
    allocator<string> a ;
    auto it = a.allocate(100);
    auto it1 = it;
    string tp;

    while (cin >> tp){
        a.construct(it1++,tp);
    }
    for (auto it3 = it; it3 != it1 ;it3++){
        cout << *it3 << endl;
    }
    while (it1 != it){
        a.destroy(--it1);    //这里必须要用前置减减
    }

    a.deallocate(it,100);
    return 0;
}
