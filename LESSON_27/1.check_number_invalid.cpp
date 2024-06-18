#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int solve(string s) {
  if (s[0] == '0') {
    return -1;
  }

  set<char> digits;
  for (char c : s) {
    if (!isdigit(c)) {
      return -1;
    }

    digits.insert(c);
  }

  if (digits.size() == 10) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int tc;
  cin >> tc;
  cin.ignore();

  while (tc) {
    string s;
    cin >> s;

    int res = solve(s);

    if (res == -1) {
      cout << "INVALID" << endl;
    } else if (res == 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }

    tc--;
  }

  return 0;
}

// 3
// 0123123343324
// 1234567899997655
// 32312fvdsfs
// 12312434

// INVALID
// YES
// INVALID
// NO
