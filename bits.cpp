#include <iostream>
using namespace std;

int bitcount(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;

    int counta = bitcount(a);
    int countb = bitcount(b);

    int gv = counta + countb;
    cout << gv;
}
