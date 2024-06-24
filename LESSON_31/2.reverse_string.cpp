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
  stack<string> st;
  string word;

  while (ss >> word) {
    st.push(word);
  }

  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }

  return 0;
}

// js c++ php java python 