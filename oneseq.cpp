#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool f(int i, vector<int> &ds, int s, int sum, int arr[], int n)
{

    // base case
    if (i == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[i]);
    s += arr[i];

    if (f(i + 1, ds, s, sum, arr, n) == true)
        return true;

    ds.pop_back();
    s -= arr[i];
    if (f(i + 1, ds, s, sum, arr, n) == true)
        return true;
    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int sum = 2;
    int n = 3;
    vector<int> ds;

    f(0, ds, 0, sum, arr, n);
}
