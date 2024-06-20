#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int n, k, a[101] = {0}, ok;

void init() {
  for (int i = 1; i <= k; i++) {
    a[i] = i;
  }
}

void generateBinaryStrings() {
  int i = k;
  while (i >= 1 && a[i] == n - k + i) {
    --i;
  }

  if (i == 0) {
    ok = 0;
  } else {
    a[i]++;
    for (int j = i + 1; j <= k; j++) {
      a[j] = a[j - 1] + 1;
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
  ok = 1;
  init();

  while (ok) {
    for (int i = 1; i <= k; i++) {
      cout << a[i];
    }
    cout << endl;
    generateBinaryStrings();
  }

  return 0;
}

// { 1, 2, 3, 4, 5 }
// generate 5C3 sub-array
// 5 3

// 123
// 124
// 125
// 134
// 135
// 145
// 234
// 235
// 245
// 345