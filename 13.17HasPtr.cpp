#include <iostream>
#include <vector>

using namespace std;

class HasPtr{
    public:
        HasPtr() = default;
        HasPtr(string str,int i = 0):ps(new string(str)),it(i){}
        HasPtr(const HasPtr &pt):ps(new string(*(pt.ps))),it(pt.it) {}
        HasPtr& operator=(HasPtr &pt){
            auto str_pt = new string(*pt.ps);   //必须要先保存一份数据下来，如果是自己给自己赋值的化，就不行了
            delete ps;
            ps = str_pt;
            it = pt.it;
        }
        ~HasPtr() { delete ps; }
    private:
        string *ps;
        int it;
};


int main(void)
{
    return 0;
}
