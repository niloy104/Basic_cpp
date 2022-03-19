#include <bits/stdc++.h>
using namespace std;
bool sorted(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(a + 1, n - 1);
    return (a[0] < a[1] && restArray);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int a = sorted(a, n);
    if (a == 1)
        cout << "Array is sorted" << endl;
}
