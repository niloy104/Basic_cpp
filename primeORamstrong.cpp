#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, rev = 0, rem, sum = 0;
    cin >> a;
    int temp=a;
    while (a > 0)
    {
        rem = a % 10;
        sum = sum + rem * rem * rem;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    cout <<"Reverse number is "<< rev << endl;
    if (sum == temp)
    {
        cout << temp << " is Amstrong number" << endl;
    }
    else
    {
        cout << temp << " is not amstrong" << endl;
    }
}