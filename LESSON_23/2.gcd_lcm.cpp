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

ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // 20 30
  int n, m;
  cin >> n >> m;

  cout << gcd(n, m); // 10
  cout << lcm(n, m); // 60
}
