#include <bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c)
{
    int x=max (a,max(b,c));
}
int32_t main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (check(a, b, c))
    {
        cout << "Pythagorian triplate" << endl;
    }
    else
    {
        cout << "Not a pythagorian triplate" << endl;
    }
}