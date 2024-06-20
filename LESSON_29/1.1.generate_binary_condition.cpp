#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int n, k, a[101] = {0}, ok;

void generateBinaryStrings() {
  int i = n;
  while (i >= 1 && a[i] == 1) {
    a[i] = 0;
    --i;
  }

  if (i == 0) {
    ok = 0;
  } else {
    a[i] = 1;
  }
}

bool check() {
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    cnt += a[i];
  }
  return cnt == k;
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

  while (ok) {
    if (check()) {
      for (int i = 1; i <= n; i++) {
        cout << a[i];
      }
      cout << endl;
    }
    generateBinaryStrings();
  }

  return 0;
}

// binary number have 2 number is 1
// 3 2

// 011
// 101
// 110
