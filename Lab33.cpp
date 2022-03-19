#include <bits/stdc++.h>
using namespace std;

int find_max(int nums[], int len)
{
    int i, max_num = nums[0];
    for (i = 1; i < len; i++)
        if (nums[i] > max_num)
            
            return max_num;
}
int main()
{
    int len = 5;
    int nums[len] = {1, 2, 3, 4, 5};
    cout << find_max << endl;
}