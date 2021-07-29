#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int 
main(void)
{
    string file_name;
    string temp;
    vector<string> file_contents;
    cout << "请输入你要读取的文件的名字:" << endl;
    cin >> file_name;
    ifstream file(file_name);
    while(file){
         file >> temp;
         file_contents.push_back(temp);
    }
    
    for(auto temp : file_contents){
        cout << temp << endl;
    }

}