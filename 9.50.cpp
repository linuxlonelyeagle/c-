#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    vector<string>  vec = {"1","2"};
    int sum = 0;
    for (auto temp : vec){
        sum += stoi(temp);
    }
    cout << sum << endl;
    return 0;
}