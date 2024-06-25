#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n, k, a[1001];
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int idx = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] <= k) {
      swap(a[i], a[idx]);
      idx++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}

// 5 3
// 2 1 5 6 3

// 2 1 3 6 5