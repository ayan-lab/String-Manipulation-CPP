// Two strings are anagrams if they are written using the same exact letters, ignoring space, punctuation, and capitalization
// check if two Strings are anagrams of each other

#include <iostream>
#include <vector>
#include <map>
#include <cctype>
using namespace std;

bool isequal(map<char, int> &s, map<char, int> &t)
{
    bool equal = true;
    if (s.size() != t.size())
    {
        return false;
    }
    for (auto it1 = s.begin(), it2 = t.begin(); it1 != s.end() && it2 != t.end(); it1++, it2++)
    {
        if (it1->first != it2->first || it1->second != it2->second)
        {
            return false;
        }
    }
    return true;
}
bool check_anagram(string s, string t)
{
    map<char, int> s_freq;
    map<char, int> t_freq;
    ;

    for (char c : s)
    {
        if (ispunct(c) || c == ' ')
            continue;
        char lower_c = tolower(c);
        s_freq[lower_c]++;
    }
    for (char c : t)
    {
        if (ispunct(c) || c == ' ')
            continue;
        char lower_c = tolower(c);
        t_freq[lower_c]++;
    }
    if (isequal(s_freq, t_freq))
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "This i!!!!s a T, . ,. ,e,,!!!s.t";
    string t = "tH,,.is.. iS a tEs???t";
   

    if (check_anagram(s, t))
    {
        cout << "Strings are anagrams of each other" << endl;
    }
    else
    {
        cout << "Strings are not anagrams of each other" << endl;
    }
}