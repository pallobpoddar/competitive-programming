#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b) {
      if (a != c) cout << a << endl;
      else cout << b << endl;
    } else cout << c << endl;
  }
  return 0;
}