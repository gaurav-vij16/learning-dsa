#include <bits/stdc++.h>
using namespace std;
void print(int n) {
  // b.c
  if (n == 0)
    return;

  cout << n << " ";
  print(n - 1);
}
int main() {
  int n;
  cin >> n;
  print(n);
}
