#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <array>

using namespace std;

int main(void)
{
    list<char *> str = {"hello wrold", "hello"};
    vector<string> str_vet;
    str_vet.assign(str.begin(),str.end());
    for (auto temp : str_vet){
        cout << temp << endl;
    }
    return 0;
}
