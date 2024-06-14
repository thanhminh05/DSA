#include <iostream>
using namespace std;

int find(int a[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      return 1;
    }
  }
  return 0;
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

  cout << find(a, n, x);

  return 0;
}

// 5 3
// 1 2 3 4 5

// 1
