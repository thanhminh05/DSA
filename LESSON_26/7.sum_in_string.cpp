#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s;
  cin >> s;

  int ans = 0;
  int sum = 0;

  for (char c : s) {
    if (isdigit(c)) {
      sum = sum * 10 + c - '0';
    } else {
      ans += sum;
      sum = 0;
    }
  }

  if (sum != 0) {
    ans += sum;
  }

  cout << ans;

  return 0;
}

// abc12bc345ou96

// 12 + 345 + 96
// 425