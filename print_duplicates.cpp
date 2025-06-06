#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Print duplicate characters from String

vector<char> print_duplivates(string s)
{
    unordered_map<char, int> freq;
    for (char c : s)
    {
        if(c == ' ')
            continue;
        freq[c]++;
    }
    vector<char> duplicates;
    for (auto &it : freq)
    {
        if (it.second > 1)
        {
            duplicates.push_back(it.first);
        }
    }
    return duplicates;
}
int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;

    vector<char> duplicates = print_duplivates(s);
    for (char c : duplicates)
    {
        cout << c << " ";
    }
}