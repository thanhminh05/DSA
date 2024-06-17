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

  string s1;
  getline(cin, s1);
  stringstream ss(s1);

  string s2;
  cin >> s2;

  string word;
  vector<string> strings;
  while (ss >> word) {
    if (word != s2) {
      strings.push_back(word);
    }
  }

  for (string str : strings) {
    cout << str << " ";
  }

  return 0;
}

// lap  trinh  python    java python c lap trinh
// trinh

// lap python java python c lap