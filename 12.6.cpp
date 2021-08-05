#include <iostream>
#include <vector>

using namespace std;

vector<int>* create_vec()
{
    auto p = new vector<int> ;
    return p;
}

vector<int>* input_vec(vector<int> *p)
{
    int it;
    while (cin >> it)
    {
        p->push_back(it);
    }
    return p;
}

void print_vec(vector<int> *p)
{
    for (auto it : *p){
        cout << it << " ";
    }
       cout << endl;
    delete p;
}

int main(void)
{
    print_vec(input_vec(create_vec()));
    return 0;
}