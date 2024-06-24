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
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  stack<int> st;

  for (int i = 0; i < n; i++) {
    if (st.empty()) {
      st.push(i);
    } else {
      while (!st.empty() && a[st.top()] < a[i]) {
        b[st.top()] = a[i];
        st.pop();
      }
      st.push(i);
    }
    cout << st.size() << endl;
  }

  while (!st.empty()) {
    b[st.top()] = -1;
    st.pop();
  }

  for (int x : b) {
    cout << x << " ";
  }

  return 0;
}

// 9
// 3 4 2 5 1 6 7 8 0

// 4 5 5 6 6 7 8 -1 -1