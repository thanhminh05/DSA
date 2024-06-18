#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

// count substring have k char diff
int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string s;
  int k;
  cin >> s >> k;

  int ans = 0;

  for (int i = 0; i < s.length(); i++) {
    int cnt[256] = {0};
    int count = 0;

    for (int j = i; j < s.length(); j++) {
      if (cnt[s[j]] == 0) {
        count++;
      }

      if (count == k) {
        ans++;
      }

      if (count > k) {
        break;
      }

      cnt[s[j]] = 1;
    }
  }

  return 0;
}

// aba

// 2
