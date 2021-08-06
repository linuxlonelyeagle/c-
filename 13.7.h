#include <iostream>
#include <string>

using namespace std;
class HasPtr{
    public:
        HasPtr(const string &s = string ()):ps(new string(s)){}
        HasPtr( const HasPtr &pt) {
            i = pt.i;
            ps = new string (*(pt.ps));               
        }
        HasPtr& operator+(const HasPtr &pt);
    private:
        string *ps;
        int i;
};

HasPtr&
HasPtr::operator+(const HasPtr &pt)
{
    i = pt.i;
    ps = new string (*(pt.ps));
}
