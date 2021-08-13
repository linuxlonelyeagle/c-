#include <iostream>
#include <vector>
#include <string>

using namespace std;

class String{

    public:
        String(string pt = "hello"):str(pt){}
        String(const String &pt);
        String& operator=(const String &pt);
    private:
    string str;
};

String::String(const String &pt)
{
    str = pt.str;
    cout << "拷贝" << endl;
}
String& String::operator=(const String &pt)
{
    str = pt.str;
    return *this;
}

int main(void)
{
    vector<String> Str;
    string it("hello world");
    for(int i = 0; i < 5; i++){
        Str.push_back(it);
    }
    return 0;
}
