#include <iostream>
using namespace std;

int firstBinarySearch(int a[], int n, int x) {
  int l = 0, r = n - 1, result = -1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] == x) {
      result = m + 1;
      r = m - 1;
    } else if (a[m] < x) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  return result;
}

int lastBinarySearch(int a[], int n, int x) {
  int l = 0, r = n - 1, result = -1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] == x) {
      result = m + 1;
      l = m + 1;
    } else if (a[m] < x) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  return result;
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

  int first = firstBinarySearch(a, n, x);
  int last = lastBinarySearch(a, n, x);

  if (first != -1) {
    cout << last - first + 1;
  } else {
    cout << 0;
  }

  return 0;
}

// 5 3
// 1 2 3 3 3

// 3
