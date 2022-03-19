#include <bits/stdc++.h>
using namespace std;
typedef struct employe
{
    int id;
    char favc;
    int salary;
} ep;
typedef union money
{
    int rice;
    char car;
    float pound;
} mn;

int main()
{
    mn m1;
    m1.rice = 1;
    m1.car='c';
    cout << m1.rice << endl;
    cout<<m1.car;


    /*ep niloy;
    cin >> niloy.id;
    cin >> niloy.favc;
    cin >> niloy.salary;

    cout << "The value of id; " << niloy.id << endl;
    cout << "The value of favaurite character: " << niloy.favc << endl;
    cout << "The value of salary: " << niloy.salary << endl;*/
}