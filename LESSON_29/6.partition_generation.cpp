#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int n, a[101], ok, cnt;

void init() {
  ok = 1;
  cnt = 1;
  a[1] = n;
}

void generate() {
  int i = cnt;
  while (i >= 1 && a[i] == 1) {
    --i;
  }

  if (i == 0) {
    ok = 0;
  } else {
    a[i]--;
    int d = cnt - i + 1;
    cnt = i;
    int q = d / a[i];
    int r = d % a[i];
    if (q) {
      for (int j = 1; j <= q; j++) {
        ++cnt;
        a[cnt] = a[i];
      }
    }
    if (r) {
      ++cnt;
      a[cnt] = r;
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
  cin >> n;
  init();

  while (ok) {
    for (int i = 1; i <= cnt; ++i) {
      cout << a[i] << " ";
    }
    cout << endl;
    generate();
  }

  return 0;
}
