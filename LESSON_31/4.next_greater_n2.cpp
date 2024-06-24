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
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    int res = -1;
    for (int j = i + 1; j < n; j++) {
      if (a[j] > a[i]) {
        res = a[j];
        break;
      }
    }
    cout << res << " ";
  }

  return 0;
}

// 9
// 3 4 2 5 1 6 7 8 0

// 4 5 5 6 6 7 8 -1 -1