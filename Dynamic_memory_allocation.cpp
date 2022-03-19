#include <bits/stdc++.h>
using namespace std;
int main()
{
    // use of malloc....
    /* int n;
     cin >> n;
     int *ptr;
     ptr = (int *)malloc(n*sizeof(int));
     for (int i = 0; i < n; i++)
     {
         cin >> ptr[i];
     }
     for (int i = 0; i < n; i++)
     {
         cout << ptr[i] << " ";
     }*/

    // use of calloc....
    int n;
    cin >> n;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }

    // use of realloc....
    int n1;
    cin >> n1;
    ptr = (int *)realloc(ptr, n1 * sizeof(int));
    for (int i = 0; i < n1; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n1; i++)
    {
        cout << ptr[i] << " ";
    }
    free(ptr);
}