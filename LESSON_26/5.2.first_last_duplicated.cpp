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
  getline(cin, s);
  map<char, int> mp;

  for (char x : s) {
    mp[x]++;
  }

  ll ans = s.length(); // 1 char
  for (auto it : mp) {
    ans += it.second * (it.second - 1) / 2;
  }
  cout << ans;
  return 0;
}

// abcda

// 6