#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main(void)
{
    list<int> vi = {0,1,2,3,4,5,6,7,8,9,};
    auto cur = vi.begin();
    while (cur != vi.end()){
        if(*cur % 2){
           cur =  vi.insert(cur,*cur);
           cur++;
           cur++;
        }
        else {
            cur=vi.erase(cur);
        }
    }
    
    for (auto temp : vi){
        cout << temp << endl;
    }
    
    return 0;
}