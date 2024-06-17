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
  int m, s;
  cin >> m >> s;
  int num = s;
  if (s > 9 * m || (s == 0 && m > 1)) {
    cout << "-1 -1";
    return 0;
  }

  int max_arr[m] = {0};
  int min_arr[m] = {0};

  for (int i = 0; i < m; i++) {
    if (num >= 9) {
      max_arr[i] = 9;
      num -= 9;
    } else {
      max_arr[i] = num;
      num = 0;
      break;
    }
  }

  for (int i = 0; i < m; i++) {
    cout << max_arr[i];
  }
  cout << endl;

  num = s - 1;
  for (int i = m - 1; i >= 0; i--) {
    if (num >= 9) {
      min_arr[i] = 9;
      num -= 9;
    } else {
      min_arr[i] = num;
      num = 0;
      break;
    }
  }

  min_arr[0] += 1;
  for (int i = 0; i < m; i++) {
    cout << min_arr[i];
  }
  cout << endl;

  return 0;
}

// 4 15

// 9600
// 1059