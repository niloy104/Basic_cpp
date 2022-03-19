#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    int maxlength = 0, current = 0, i = 0, st = 0, maxst = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (current > maxlength)
            {
                maxlength = current;
                maxst = st;
            }
            current = 0;
            st = i + 1;
        }
        else
        {
            current++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << "Largest word is: ";
    for (i = 0; i < maxlength; i++)
    {
        cout << arr[i + maxst];
    }
    cout << endl;
    cout << "Largest word length: " << maxlength << endl;
}