#include <iostream>
using namespace std;

bool binarySearch(int a[], int n, int x) {
  int l = 0, r = n - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] == x) {
      return true;
    } else if (a[m] < x) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n, x;
  cin >> n >> x;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }

  cout << binarySearch(a, n, x);

  return 0;
}

// 5 3
// 1 2 3 4 5

// 1
