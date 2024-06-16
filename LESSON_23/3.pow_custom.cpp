#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

// Exponentiation by Squaring. Only using with integer. Faster
// pow built-in using with any number
ll pow_custom(ll a, ll b) {
  ll res = 1;

  while (b > 0) {
    if (b % 2 == 1) {
      res *= a;
    }

    b = b / 2;
    a = a * a;

    cout << a << " " << b << " " << res << endl;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n, m;
  cin >> n >> m;
  pow_custom(n, m);
}

// 2 10

// 4 5 1
// 16 2 4
// 256 1 4
// 65536 0 1024

// -------------------

// 2 16

// 4 8 1
// 16 4 1
// 256 2 1
// 65536 1 1
// 4294967296 0 65536
