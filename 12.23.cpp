#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main( void)
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    str1 += str2;
    auto it = new char[str1.size()];
    int i = 0;
    while (i <= str1.size())
    {
        it[i] = str1[i];
        i++;
    }
    for (int i = 0; i < str1.size(); i++)
    {
        cout << it[i];
    }
    cout << endl;
    return 0;
}
