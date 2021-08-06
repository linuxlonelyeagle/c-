#include <iostream>
#include <vector>
#include <string>

using namespace std;

int num = 0;

class Employee{
    public:
        Employee() = default;
        Employee(const string na):name(na),number(num++) {}
        ~Employee() = default;
        Employee(const Employee &) = delete;
        Employee& operator=(const Employee&) = delete;    
        void scan();
    private:
        string name;
        int number;
};

void Employee::scan()
{
    cout << "name:" << name << endl;
    cout << "number:" << number << endl;
}

int main(void)
{
    return 0;
}