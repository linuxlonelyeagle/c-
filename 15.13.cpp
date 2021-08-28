#include <iostream>

using namespace std;

class base {
public:
    base(const string str):basename(str){};
    string name() { return basename; }
    virtual void print(ostream &os) { os << basename; }

private:
    string basename;
};

class derived : public base {
public:
    derived() = default;
    derived(const string & str, int j):base(str), i(j){};
    void printf (ostream &os)  
    { print(os); os << " " << i; } 
private:
    int i; 
};

int main(void)
{
    derived der("斗破苍穹",10);
    der.printf(cout);
    return 0;
}