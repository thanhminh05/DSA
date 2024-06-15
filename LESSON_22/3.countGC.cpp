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
  int count = 0;

  for (int i = 1; i <= sqrt(n); i++) {
    if (i * i == n) {
      count += 1;
    } else if (n % i == 0) {
      count += 2;
    }
  }

  cout << count;
}

// 20

// 6