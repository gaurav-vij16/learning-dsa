#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> mp;

    vector<int> arr = {2, 1, 3, 1};

    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for (auto temp : mp)
    {
        cout << temp.first << " " << temp.second;
        cout << endl;
    }
}
