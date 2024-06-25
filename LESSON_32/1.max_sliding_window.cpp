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

  int sum = 0;
  for (int i = 0; i < k; i++) {
    sum += a[i];
  }

  long long res = sum, idx = 0;

  for (int i = k; i < n; i++) {
    sum = sum - a[i - k] + a[i];
    if (sum > res) {
      res = sum;
      idx = i - k + 1;
    }
  }

  cout << res << endl;
  for (int j = 0; j < k; j++) {
    cout << a[idx + j] << " ";
  }

  return 0;
}

// 10 3
// 1 2 3 1 5 2 7 8 9 1

// 24
// 7 8 9