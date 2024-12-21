#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string str1, str2;
  cin >> str1 >> str2;
  int a = 0, b = 0;
  for (int i = 0; i < n; i++) {
    if (str1[i] != str2[i]) {
      if (str1[i] == '0') a++;
      else b++;
    }
  }
  cout << max(a, b) << endl;
}

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}