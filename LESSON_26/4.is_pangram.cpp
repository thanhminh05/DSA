#include <bits/stdc++.h>
#include <iostream>

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
  set<char> char_set;

  for (char c : s) {
    char_set.insert(c);
  }

  if (char_set.size() == 26) {
    cout << 1;
  } else {
    cout << 0;
  }
  return 0;
}

// thequickbrownfoxjumpsoverthelazydog

// 1