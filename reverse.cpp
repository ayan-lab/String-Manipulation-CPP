#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void reverse_string(string &s, int start, int end)
{
    if (start >= end)
        return;

    swap(s[start], s[end]);
    reverse_string(s, start + 1, end - 1);
}
int main()
{
    string s = "reverse this";
    reverse_string(s, 0, s.length() - 1);
    cout << s;
}