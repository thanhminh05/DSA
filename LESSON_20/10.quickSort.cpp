#include <iostream>
using namespace std;

int partition(int a[], int l, int r) {
  int pivot = a[r];
  int i = l - 1;

  for (int j = l; j < r; j++) {
    if (a[j] < pivot) {
      i++;
      swap(a[i], a[j]);
    }
  }

  i++;
  swap(a[i], a[r]);

  return i;
}

void quickSort(int a[], int l, int r) {
  if (l < r) {
    int pivot_index = partition(a, l, r);

    quickSort(a, l, pivot_index - 1);
    quickSort(a, pivot_index + 1, r);
  }
}

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

  quickSort(a, 0, n - 1);

  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}

// 8
// 8 7 2 1 5 3 6 4

// 1 2 3 4 5 6 7 8
