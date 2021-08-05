#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>>  create_vec()
{
    auto it = make_shared<vector<int>>();  // 后面必须要加括号
    return it;
}

shared_ptr<vector<int>> input_vec(shared_ptr<vector<int>> it)
{
    int tp;
    while (cin >> tp){
        it->push_back(tp);
    }
    return it;
}

void print_vec(shared_ptr<vector<int>> it)
{
    for (auto tp : *it){
        cout << tp << " ";
    }
    cout << endl;
}




int main(void)
{
    print_vec(input_vec(create_vec()));
    return 0;
}
