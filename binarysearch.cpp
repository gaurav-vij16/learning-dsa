#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[4] = {1, 2, 3, 4};
    int odd[5] = {5, 6, 7, 8, 9};
    int evenIndex = BinarySearch(even, 4, 3);
    int oddIndex = BinarySearch(odd, 5, 99);
    cout << evenIndex << endl;
    cout << oddIndex << endl;
}
