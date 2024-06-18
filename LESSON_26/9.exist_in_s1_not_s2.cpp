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
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);

  stringstream ss1(s1);
  stringstream ss2(s2);

  set<string> arr1;
  set<string> arr2;

  string word;

  while (ss1 >> word) {
    arr1.insert(word);
  }

  while (ss2 >> word) {
    arr2.insert(word);
  }

  for (string str1 : arr1) {
    if (arr2.count(str1) == 0) {
      cout << str1 << " ";
    };
  }

  return 0;
}

// aaa xyz ab zzz abc dd dd abc
// xyz dd ttt sas cdc

// aaa ab abc zzz
