#include <vector>
#include <string>
#include <fstream>
#include <iostream>


using namespace std;

int main (void)
{
    string file_name;
    string temp;
    vector<string> contents;
    cin>>file_name;
    ifstream file_contents(file_name);
    while (getline(file_contents,temp)){
        contents.push_back(temp);
    }
    for(auto content : contents){
        cout << content << endl;
    }
    
    return 0;
}