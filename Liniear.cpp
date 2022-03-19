#include <bits/stdc++.h>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 1; i <= n; i++)
    {
        if (key == arr[i])
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    if (linearsearch(arr, n, key) == -1)
    {
        cout << "Item is not found" << endl;
    }
    else
    {
        cout << key << " is found " << linearsearch(arr, n, key) << " position" << endl;
    }
    return 0;
}