#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void alternate(int arr[], int n) {
  for (int i = 0; i < n - 1; i += 2) {
    swap(arr[i], arr[i + 1]);
  }
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int brr[4] = {6, 7, 8, 9};

  alternate(arr, 5);
  printArray(arr, 5);
}