#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int brr[4] = {4, 3, 2, 1};

    reverseArray(arr, 4);
    reverseArray(brr, 4);

    printArray(arr, 4);
    printArray(brr, 4);
}
