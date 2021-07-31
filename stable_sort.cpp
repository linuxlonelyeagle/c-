#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

void elimdups(vector<string> &words);
int main(void)
{
    vector<string> words = {"fox", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "trutle"};
    elimdups(words);
    return 0;
}

bool isshorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void elimdups(vector<string> &words)
{
    stable_sort(words.begin(),words.end(),isshorter); 
    for (auto temp : words){
        cout << temp << " ";
    }   
    cout << endl;
}