#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
