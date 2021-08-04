#include "./StrBlob.h"
#include <vector>
#include <string>

using namespace std;


int main(void)
{
    StrBlob b1;
    {
        StrBlob b2 = {"a","an","the"};
        b1 = b2;
        b2.push_back("about");
    }
    b1.scan(); //这里有四个元素，因为strblob 只有一个元素，每次赋值拷贝的时候，另外的那个元素
    //也要赋值拷贝
}
