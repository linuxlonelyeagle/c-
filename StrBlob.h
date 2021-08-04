#include <vector>
#include <string>
#include <memory>
#include <stdexcept>   //可以异常处理的库
#include <iostream>

using namespace std;

class StrBlob{
    public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    //增加或者删除元素
    void push_back(const string &t) {data->push_back(t);}
    void pop_back();
    //返回开头的string的引用
    string &front();
    const string &front() const;
    //返回末尾的string的引用 
    string &back();
    const string &back() const;
    void scan();

    private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};   // 这里必须要有分号
StrBlob::StrBlob():data(make_shared<vector<string>>())  {}
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}
void StrBlob::check(size_type i, const  string &msg) const   //这个void 一定要要
{
    if (i >= data->size())
    throw out_of_range(msg);
}

string& StrBlob::front()
{
    check(0,"front on empty StrBlob");
    return data->front();
}

string& StrBlob::back()
{
    check(0,"back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0,"pop_back on empty StrBlob");
    data->pop_back();  
}
void StrBlob::scan()
{
    for (auto it : *this->data){
        cout << it << " ";
    }
    cout << endl;
}
const string& StrBlob::front() const 
{
    check(0,"front on empty StrBlob");
    return data->front();
}

const string& StrBlob::back() const
{
    check(0,"back on empty StrBlob");
    return data->back();
}

