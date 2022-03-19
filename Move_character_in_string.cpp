#include <bits/stdc++.h>
using namespace std;
string movecha(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = movecha(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << movecha(s) << endl;
}