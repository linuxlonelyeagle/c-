#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <utility>

using namespace std;

class StrVec{
    public:
        StrVec(): // allocator成员默认初始化
        elements(nullptr),first_free(nullptr), cap(nullptr){ }   
        StrVec(const StrVec&);    // 拷贝构造函数
        StrVec& operator=(const StrVec&);   // 拷贝赋值运算符
        ~StrVec();
        void push_back(const string&);  
        size_t size() const {return first_free - elements; }
        size_t capacity() const {return cap - elements; }
        string *begin() const { return elements; }
        string *end() const {return first_free; }
        StrVec& operator=(initializer_list<string> il);
        string& operator[](size_t n);
        const string& operator[] (size_t t) const;

    private:
    static allocator<string> alloc;   //分配元素
    //被添加元素的函数使用
    void chk_n_alloc() 
        { if (size() == capacity()) readllocate(); }
    //工具函数，被拷贝构造函数，赋值运算符和构造函数所使用
    pair<string*, string*> alloc_n_copy
        (const string*, const string*);
    void free();
    void readllocate();      // 获取更多内存并拷贝已有元素
    string *elements;       
    string *first_free;
    string *cap;  

};
string& StrVec::operator[](size_t n)
{
    return elements[n];
}

const string& StrVec::operator[](size_t n) const
{
    return elements[n];
}

StrVec& StrVec::operator=(initializer_list<string> il)
{
    auto data = alloc_n_copy(il.begin(),il.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}


void StrVec::push_back(const string &s)
{
    chk_n_alloc();   //确保空间容纳新元素
    alloc.construct(first_free++,s);
}

pair<string*, string*> 
StrVec::alloc_n_copy(const string *b, const string *e)
{
    auto data = alloc.allocate(e - b);
    return  {data, uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
    if (elements) {
        for (auto p = first_free; p != elements; )
        alloc.destroy(p--);
        alloc.deallocate(elements,cap-elements);
    }
}

StrVec::StrVec(const StrVec &s)
{
    auto newdata = alloc_n_copy(s.begin(),s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::~StrVec() { free(); }

StrVec &StrVec::operator=(const StrVec &rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::readllocate()
{
    auto newcapacity = size() ? 2 *size() : 1;
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;   //指向新数组中下一个空闲位置
    auto elem = elements; //指向旧数组中下一个元素
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++,std::move(*elem++));
        free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}

int main(void)
{

    return 0;
}
