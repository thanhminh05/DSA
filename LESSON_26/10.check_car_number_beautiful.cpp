#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

bool case1(string s) { return s[0] == s[1] && s[1] == s[2] && s[3] == s[4]; }

bool case2(string s) {
  for (int i = 0; i < 4; i++) {
    if (s[i] >= s[i + 1]) {
      return false;
    }
  }

  return true;
}

bool case3(string s) {
  for (char c : s) {
    if (c != '6' && c != '8') {
      return false;
    }
  }

  return true;
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

    string temp = s.substr(5, 6);
    temp.erase(3, 1);

    if (case1(temp) || case2(temp) || case3(temp)) {
      cout << "true" << endl;
    } else {
      cout << "false" << endl;
    }

    tc--;
  }

  return 0;
}

// 7
// 29T1-123.45
// 29T1-555.55
// 29T1-222.33
// 29T1-686.88
// 29T1-123.33
// 29T1-555.54
// 29T1-606.88

// true
// true
// true
// true
// false
// false
// false
