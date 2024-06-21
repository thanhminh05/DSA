#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

string s;

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cin >> s;

  int r = s.length() - 1;
  while (r >= 0 && s[r] == '1') {
    s[r] = '0';
    r--;
  }

  s[r] = '1';
  cout << s << endl;

  return 0;
}

// 101111

// 110000
