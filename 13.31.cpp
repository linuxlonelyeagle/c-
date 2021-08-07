#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>


using namespace std;

class HasPtr{
    friend void swap(HasPtr &it1, HasPtr &it2);
    public:
        HasPtr() = default;
        HasPtr(string str,int i = 0) : ps(new string(str)),it(i){}
        HasPtr(const HasPtr &pt) : ps(new string(*(pt.ps))),it(pt.it) {}
        HasPtr& operator = (const HasPtr &pt){
            auto str_pt = new string(*pt.ps);   //必须要先保存一份数据下来，如果是自己给自己赋值的化，就不行了
            delete ps;
            ps = str_pt;
            it = pt.it;
            return *this;
        }
        bool operator < (const HasPtr &pt);
        ~HasPtr() { delete ps; }
        void look();
    private:
        string *ps;
        int it;
};


void swap(HasPtr &it1, HasPtr &it2)    // 这里必须要是引用，如果不是引用的化，就会调用构造赋值函数
{
    using std::swap;
    swap(it1.ps, it2.ps);
    swap(it1.it, it2.it);
}


void HasPtr::look(void)
{
    cout << "string:" << *ps << endl;
    cout << "it:"    << it << endl; 
}

bool HasPtr::operator<(const HasPtr &pt)
{
    cout << "****" <<endl;
    if (it < pt.it) 
        return true;
    return false;
}

bool f( HasPtr it1,  HasPtr it2)
{
    if (it1 < it2)
        return true;
    return false;
}

int main(void)
{
    vector<HasPtr> its;
    HasPtr it1("world", 1314);
    HasPtr it2("hello", 520);
    its.push_back(it1);
    its.push_back(it2);
    sort(its.begin(),its.end(),f);
    for (auto i : its){
        i.look();
    }
    return 0;
}
