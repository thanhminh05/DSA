#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

void checkValid(string word) {
  stack<char> st;
  for (char c : word) {
    if (c == '(') {
      st.push(c);
    } else {
      if (st.empty()) {
        cout << "INVALID" << endl;
      } else {
        st.pop();
      }
    }
  }

  if (st.empty()) {
    cout << "VALID" << endl;
  } else {
    cout << "INVALID" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    checkValid(s);
  }

  return 0;
}

// 3
// ()()((()))(
// ()()((()))()
// ()(((()))()

// INVALID
// VALID
// INVALID
