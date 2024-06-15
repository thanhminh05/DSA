#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  for (int i = 2; i < sqrt(n); i++) {
    while (n % i == 0) {
      cout << i << " ";
      n = n / i;
    }
  }
  if (n != 1) {
    cout << n;
  }
}

// 84

// 2 2 3 7
