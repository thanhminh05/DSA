#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

int n, a[101] = {0}, ok;

void generateBinaryStrings() {
  int i = n;
  while (i >= 1 && a[i] == 1) {
    a[i] = 0;
    --i;
  }

  if (i == 0) {
    ok = 0;
  } else {
    a[i] = 1;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cin >> n;
  ok = 1;

  while (ok) {
    for (int i = 1; i <= n; i++) {
      cout << a[i]; // print one number in binary from 1 to n
    }
    cout << endl;
    generateBinaryStrings(); // update a to other number
  }

  return 0;
}
