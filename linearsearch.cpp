#include <iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (key == arr[i]) {
      return 1;
    }
  }
  return 0;
}
int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int key;
  cin >> key;

  int lin = linearsearch(arr, 6, key);
  if (lin) {
    cout << "present" << endl;
  } else {
    cout << "absent" << endl;
  }
}
