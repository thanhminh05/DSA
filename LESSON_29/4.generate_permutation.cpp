#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int n, k, a[101] = {0}, ok;

void init() {
  for (int i = 1; i <= n; i++) {
    a[i] = i;
  }
}

void generate() {
  int i = n - 1;
  while (i >= 1 && a[i] > a[i + 1]) {
    --i;
  }

  if (i == 0) {
    ok = 0;
  } else {
    int j = n;
    while (a[i] > a[j]) {
      --j;
    }

    swap(a[i], a[j]);
    int l = i + 1, r = n;
    while (l < r) {
      swap(a[l], a[r]);
      ++l, --r;
    }
    // reverse(a + i + 1, a + n + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cin >> n;
  ok = 1;
  init();

  while (ok) {
    for (int i = 1; i <= n; i++) {
      cout << a[i];
    }
    cout << endl;
    generate();
  }

  return 0;
}

// 6

// 123456
// 123465
// 123546
// 123564
// 123645
// 123654
// 124356
// 124365
// 124536
// 124563
// 124635
// 124653
// 125346
