#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using namespace std;

bool is_perfect_square(ll n) {
  ll sqrt_n = sqrt(n);
  return sqrt_n * sqrt_n == n;
}

bool is_fibonacci(ll n) {
  return is_perfect_square(5 * n * n + 4) || is_perfect_square(5 * n * n - 4);
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll n;
  std::cin >> n;

  std::cout << is_fibonacci(n);
}

// 21

// 1