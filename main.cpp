#include <bits/stdc++.h>
#include <iostream>

#define ll long long
using namespace std;

void nextSubset(int N, int K, vector<int> &X) {
  // Convert X to 0-indexed for easier handling in C++
  for (int i = 0; i < K; ++i) {
    X[i]--;
  }

  // Step backwards to find the first element that can be incremented
  for (int i = K - 1; i >= 0; --i) {
    if (X[i] < N - K + i) {
      // Increment this element
      X[i]++;
      // Update the following elements
      for (int j = i + 1; j < K; ++j) {
        X[j] = X[j - 1] + 1;
      }

      // Convert back to 1-indexed and print the result
      for (int i = 0; i < K; ++i) {
        X[i]++;
      }
      return;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int N = 5;
  int K = 3;
  vector<int> X = {2, 5, 4};

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < K; ++j) {
      cout << X[j] << " ";
    }
    cout << endl;
    nextSubset(N, K, X);
  }

  // Print the next subset
  for (int i = 0; i < K; ++i) {
    cout << X[i] << " ";
  }
  cout << endl;

  return 0;
}

// 101111

// 110000
