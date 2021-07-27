#include <iostream>
#include <string>


using namespace std;
using arr = string[10];

string strs[10];

string (&func(string str)) [10];
arr * func1(string str);
auto func2(string str) -> string(*)[10];
decltype(strs) *func3(string str);

void fun5(int a,double b, int c=10)
{
    cout<< "hello world" <<endl;

}

int main(void)
{
    fun5(10,10);
    return 0;
}