#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int a[n + 1];
  fill(a, a + n + 1, 1);

  for (int i = 2; i < sqrt(n); i++) {
    if (a[i]) {
      for (int j = i * i; j < n; j += i) {
        a[j] = 0;
      }
    }
  }

  for (int i = 2; i < n; i++) {
    if (a[i]) {
      cout << i << " ";
    }
  }
}

// 100

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
