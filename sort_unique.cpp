#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

void eliDups(vector<string> &words);

int main(void)
{
    vector<string> words = {"fox", "quick", "red", "fox", "jumps", "over", "the", "slow", "red","turtle"};
    eliDups(words);
    return 0;
}

void eliDups(vector<string> &words)
{
    for(auto temp : words){
        cout << temp << " ";
    }
    cout << endl;
    sort(words.begin(),words.end());
    
    for(auto temp : words){
        cout << temp << " ";
    }
    cout << endl;
    auto end_unique = unique(words.begin(),words.end());
    for(auto temp : words){
        cout << temp << " ";
    }
    cout << endl;
    words.erase(end_unique,words.end());

    for(auto temp : words){
        cout << temp << " ";
    }
    cout << endl;


}