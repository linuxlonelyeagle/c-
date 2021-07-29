#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> vec_int;
    int temp;
    cout << "请输入迭代器的内容" << endl;
    while(cin >> temp){
        vec_int.push_back(temp);
    }
    //恢复cin 的状态位
    cin.clear();
    cout << "请输入你要查找的值" << endl;
    while (cin.get() != '\n')
    ;
    cin >> temp;
    cout << temp << endl;
    auto begin  =  vec_int.begin();
    auto end    =  vec_int.end();
    while (begin != end){
        if(*begin == temp){
            cout << "找到" << endl;
            break;
        }
        begin++;
    }
    
    if (begin == end)  cout << "没有找到"  <<endl;
    return 0;
}
