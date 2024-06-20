#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int n, a[101];

void init() {
  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
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
  init();

  do {
    for (int i = 0; i < n; i++) {
      cout << a[i];
    }
    cout << endl;
  } while (next_permutation(a, a + n));

  return 0;
}

// 4

// 1234
// 1243
// 1324
// 1342
// 1423
// 1432
// 2134
// 2143
// 2314
// 2341
// 2413
// 2431
// 3124
// 3142
// 3214
// 3241
// 3412
// 3421
// 4123
// 4132
// 4213
// 4231
// 4312
// 4321
