#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;

int main(void)
{
    vector<int> vec_int;
    deque<int> deq_ji;
    deque<int> deq_ou;

    int temp ;
    
    cout << "输入数据:" << endl;
    while (cin >> temp) {
        vec_int.push_back(temp);
    }
    for (auto temp : vec_int){
        if (temp%2 == 1){
            deq_ji.push_back(temp);
        }
        else{
            deq_ou.push_back(temp);
        }
    }
    for (auto temp : deq_ou){
        cout << temp << endl;
    }
    
    for (auto temp : deq_ji){
        cout << temp << endl;
    }

    return 0;
}
