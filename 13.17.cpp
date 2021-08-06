#include <iostream>
#include <vector>

using namespace std;



class numbered{
    friend void f(numbered s);
    public:
    
    numbered(int i=0):mysn(i){};
    numbered(const numbered &it);
    private:
    int mysn;    
};
numbered::numbered(const numbered &it)
{
    int tp = it.mysn;
    mysn = ++tp;   
}

void f(numbered s)
{
    cout << s.mysn << endl;
}

int main(void)
{
    numbered a,b=a,c=b;
    f(a);
    f(b);
    f(c);
    return 0;
}
