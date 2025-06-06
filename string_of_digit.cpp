#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool string_contains_only_digits(string s)
{
    for (char c : s)
    {
        if (isalpha(c) || ispunct(c) || c == ' ')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "54815s465";
    if (string_contains_only_digits(s))
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}