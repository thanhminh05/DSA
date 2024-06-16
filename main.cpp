#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  ll res = n;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n = n / i;
      }
      res -= res / i;
    }
    if (n != 1) {
      res -= res / n;
    }
  }
  cout << res;
}

// 20

// 6