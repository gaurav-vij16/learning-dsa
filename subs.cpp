#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void f(int i, vector<int> &ds, int arr[], int n)
{
    // base case
    if (i >= n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }

        cout << endl;
        return;
    }
    // taken elements
    ds.push_back(arr[i]);
    f(i + 1, ds, arr, n);

    // remove or !take

    ds.pop_back();
    f(i + 1, ds, arr, n);
}
int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    f(0, ds, arr, n);
}
