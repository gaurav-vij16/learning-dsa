#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int t1 = 0;
    int t2 = 1;
    int count = 2;
    int x;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        int next = t1 + t2;
        if (next == x)
        {
            cout << count;
            break;
        }
        count++;
        t1 = t2;
        t2 = next;
    }
 }
