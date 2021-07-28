#include <iostream>
using namespace std;

int reused = 42;
int main(void)
{
    int unique = 0; 
    cout << reused << " " << unique << endl;
    int reused = 0;
    cout << reused << " " << unique << endl;
    cout << ::reused << " " << unique << endl;     //显示使用全局变量

}


