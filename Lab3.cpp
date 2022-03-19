#include <iostream>
#include <vector>
using namespace std;
void findLIS(vector<int> const &arr)
{
    int n = arr.size();
    if (n == 0)
    {
        return;
    }

    vector<vector<int>> LIS(n, vector<int>{});

    LIS[0].push_back(arr[0]);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && LIS[j].size() > LIS[i].size())
            {
                LIS[i] = LIS[j];
            }
        }

        LIS[i].push_back(arr[i]);
    }

    // uncomment the following code to print contents of `LIS`
    /* for (int i = 0; i < n; i++)
    {
        cout << "LIS[" << i << "] — ";
        for (int j: LIS[i]) {
            cout << j << " ";
        }
        cout << endl;
    } */

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (LIS[j].size() < LIS[i].size())
        {
            j = i;
        }
    }

    for (int i : LIS[j])
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> arr = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};

    findLIS(arr);

    return 0;
}