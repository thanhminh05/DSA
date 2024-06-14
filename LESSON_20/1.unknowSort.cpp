#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        swap(a[i], a[j]);
      }
    }

    cout << "Step " << i + 1 << ": ";
    for (int x : a) {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}

// 4
// 5 7 3 2

// Step 1: 2 7 5 3
// Step 2: 2 3 7 5
// Step 3: 2 3 5 7
