#include "bits/stdc++.h"
using namespace std;
int getBit(int num, int pos)
{
    return (num & (1 << pos)) != 0;
}
int setBit(int num, int pos)
{
    return (num | (1 << pos));
}
int clearBit(int num, int pos)
{
    int mask = ~(1 << pos);
    return (num & mask);
}
int updateBit(int num, int pos, int value)
{
    int mask = ~(1 << pos);
    num = num & mask;
    return (num | (value << pos));
}
int main()
{
    cout << "Get Bit: " << getBit(5, 2) << endl;
    cout << "Set Bit: " << setBit(5, 1) << endl;
    cout << "Clear Bit: " << clearBit(5, 2) << endl;
    cout << "Update Bit: " << updateBit(5, 1,1) << endl;
    return 0;
}