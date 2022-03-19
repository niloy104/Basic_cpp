#include <bits/stdc++.h>
using namespace std;
void margsort(int a[], int i, int j);
void quickSort(int[], int, int);
int partition(int[], int, int);
void swap(int *, int *);
int n;
int main()
{
    cout << "The arry elements is: {27,23,29,33,26,31,30,32} " << endl;
    int arr[] = {27, 23, 29, 33, 26, 31, 30, 32};
    n = sizeof(arr) / sizeof(arr[0]);
    margsort(arr, 0, n - 1);
    cout << "The Sorted array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
void quickSort(int arr[], int low, int max)
{
    if (low < max)
    {
        int pInd = partition(arr, low, max);
        quickSort(arr, low, pInd - 1);
        quickSort(arr, pInd + 1, max);
    }
}

int partition(int arr[], int low, int max)
{
    int pInd = low;
    int pvt = arr[max];
    int i;
    for (i = low; i < max; i++)
    {
        if (arr[i] < pvt)
        {
            swap(&arr[i], &arr[pInd]);
            pInd++;
        }
    }
    swap(&arr[max], &arr[pInd]);
    return pInd;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void margsort(int a[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        margsort(a, i, mid);
        margsort(a, mid + 1, j);
        quickSort(a, 0, n - 1);
    }
}