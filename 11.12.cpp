#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <utility>

using namespace std;
int main(void)
{
    vector<pair<string, int>> vec_pai;
    string it1;
    int it2;
    while (cin >> it1 >> it2){
        pair<string, int> it3 (it1, it2);
        vec_pai.push_back(it3);
    }
    for (auto it : vec_pai){
        cout << it.first << " " << it.second << " ";
    }
    cout << endl;
    return 0;
}