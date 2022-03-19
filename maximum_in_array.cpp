#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mx = 0;
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minimum = arr[0];
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << "Maximum is: " << mx << endl;

    return 0;
}