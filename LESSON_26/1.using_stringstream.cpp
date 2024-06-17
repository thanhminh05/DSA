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
  stringstream ss(s);

  string word;
  int cnt = 0;
  vector<string> strings;
  while (ss >> word) {
    cnt++;
    strings.push_back(word);
  }

  for (string str : strings) {
    cout << str << " ";
  }

  return 0;
}
