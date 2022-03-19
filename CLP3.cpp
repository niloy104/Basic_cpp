#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
void knapsack(int W, int wt[], int val[], int n)
{
    int i, w;
    int p[n + 1][W + 1];
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                p[i][w] = 0;
            }
            else if (wt[i - 1] <= w)
            {
                p[i][w] = max(val[i - 1] + p[i - 1][w - wt[i - 1]], p[i - 1][w]);
            }
            else
            {
                p[i][w] = p[i - 1][w];
            }
        }
    }
    cout << "max value is: " << p[n][W];
}

int main()
{
    int n, W, val[20], wt[20];
    cout << "Input the number of item: ";
    cin >> n;
    cout << "Input the size of knapsack: ";
    cin >> W;

    cout << "Input the values:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    cout << "Input the weight of the items: "<<endl;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &wt[i]);
    }
    knapsack(W, wt, val, n);
}