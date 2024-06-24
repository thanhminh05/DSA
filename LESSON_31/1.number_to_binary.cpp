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
  int n;
  cin >> n;
  stack<int> st;

  while (n != 0) {
    st.push(n % 2);
    n = n / 2;
  }

  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }

  return 0;
}

// 127

// 1111111