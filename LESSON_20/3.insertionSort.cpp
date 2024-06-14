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

  for (int i = 1; i < n; i++) {
    int key = a[i];
    int j = i - 1;

    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;

    cout << "Step " << i << ": ";
    for (int x : a) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}

// 4
// 5 7 3 2

// Step 1: 5 7 3 2
// Step 2: 3 5 7 2
// Step 3: 2 3 5 7
