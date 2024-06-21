#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int n, k, a[1005];

void next() {
  int i = 3;
  while (i >= 1 && a[i] == n - k + 1) {
    --i;
  }
  if (i == 0) {
    for (int i = 1; i <= k; i++) {
      cout << i << " ";
    }
  } else {
    a[i]++;
    for (int j = i + 1; j <= k; j++) {
      a[j] = a[j - 1] + 1;
    }
    for (int i = 1; i <= k; ++i) {
      cout << a[i] << " ";
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cin >> n >> k;
  for (int i = 1; i <= k; ++i) {
    cin >> a[i];
  }
  next();

  cout << endl;

  return 0;
}
