#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[8] = {1, 3, 3, 3, 3, 3, 3, 4};

    int evenIndex = firstOccurence(even, 8, 3);
    int LastIndex = lastOccurence(even, 8, 3);

    cout << evenIndex << endl;
    cout << LastIndex << endl;
}
