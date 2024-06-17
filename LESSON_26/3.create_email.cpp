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

  for (char &c : s) {
    c = tolower(c);
  }

  stringstream ss(s);

  string word;
  vector<string> words;

  while (ss >> word) {
    cout << word << endl;
    words.push_back(word);
  }

  int length = words.size();
  string email = words[length - 1];
  for (int i = 0; i < length - 1; i++) {
    email += words[i][0];
  }

  email += "@gmail.com";
  cout << email;
  return 0;
}

// NguYEN VAN     maNH

// manhnv@gmail.com