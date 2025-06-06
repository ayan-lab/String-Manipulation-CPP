#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

char first_non_repeated_character(string s)
{
    int n = s.length();
    unordered_map<char, pair<int, int>> freq; // {count, first_index}

    for (int i = 0; i < n; i++)
    {
        if (ispunct(s[i]) || s[i] == ' ')
            continue;

        if (freq.find(s[i]) == freq.end())
            freq[s[i]] = {1, i};
        else
            freq[s[i]].first++;
    }

    int min_index = 10e+7;
    char result = ' ';

    for (auto &it : freq)
    {
        if (it.second.first == 1 && it.second.second < min_index)
        {
            min_index = it.second.second;
            result = it.first;
        }
    }

    return result;
}

int main()
{
    string s = "statistics";
    char result = first_non_repeated_character(s);

    if (result == ' ')
    {
        cout << "No non-repeating character";
    }
    else
    {
        cout << result;
    }

    return 0;
}
