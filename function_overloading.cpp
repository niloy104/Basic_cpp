#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    cout << "Two number ";
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Three number ";
    return a + b + c;
}
int volume(double r, int h)
{
    cout << "The volume ";
    return (3.1416 * r * r * h);
}
int volume(int a)
{
    cout << "The volume of";
    return (a * a * a);
}
int volume(int l, int b, int h)
{
    cout << "The volume of ";
    return (l * b * h);
}
int main()
{
    cout << "Sum: " << sum(4, 4) << endl;
    cout << "Sum: " << sum(4, 5, 6) << endl;
    cout << "is: " << volume(4.56, 7) << endl;
    cout << " cube is: " << volume(5) << endl;
    cout << "rectengale is: " << volume(4, 5, 3) << endl;
    return 0;
}