#include <bits/stdc++.h>
using namespace std;
void printSum(int arr[][3], int row, int col)
{
    cout << "priting sum row wise" << endl;
    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}
void LargestSum(int arr[][3], int row, int col)
{
    cout << "the largest sum will be->" << endl;
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "largest sum is " << maxi << endl;
    cout << "rowINdex is :" << rowIndex << endl;
}
int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing the arrays
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printSum(arr, 3, 3);
    LargestSum(arr, 3, 3);
}