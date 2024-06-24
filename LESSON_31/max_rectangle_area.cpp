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
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  stack<int> st;

  int res = INT_MIN;
  int i = 0;
  while (i < n) {
    if (st.empty() || a[i] >= a[st.top()]) {
      st.push(i);
      ++i;
    } else {
      int idx = st.top();
      st.pop();
      if (st.empty()) {
        res = max(res, i * a[idx]);
      } else {
        res = max(res, a[idx] * (i - st.top() - 1));
      }
    }
  }

  while (!st.empty()) {
    int idx = st.top();
    st.pop();
    if (st.empty()) {
      res = max(res, i * a[idx]);
    } else {
      res = max(res, a[idx] * (i - st.top() - 1));
    }
  }
  cout << res << endl;

  return 0;
}

// 7
// 6 2 5 4 5 1 6

// 12
