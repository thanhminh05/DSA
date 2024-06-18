#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

string solve(string s1, string s2) {
  set<char> arr1;
  set<char> arr2;

  for (char c : s1) {
    arr1.insert(c);
  }

  for (char c : s2) {
    arr2.insert(c);
  }

  return "";
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
    string s1, s2;
    cin >> s1 >> s2;

    cout << solve(s1, s2) << endl;

    tc--;
  }

  return 0;
}
