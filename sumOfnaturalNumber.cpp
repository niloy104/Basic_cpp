#include <iostream>
using namespace std;
int sum(int num)
{
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result += i;
    }
    return result;
}
int32_t main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}