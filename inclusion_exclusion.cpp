#include <bits/stdc++.h>
using namespace std;
int divisabale(int n, int a, int b)
{
    int x = n / a;
    int y = n / b;
    int z = n / (a * b);
    int ans = (x + y) - z;
    return ans;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int result = divisabale(n, a, b);
    cout << result << endl;
    return 0;
}