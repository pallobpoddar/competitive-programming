#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y;
  for (int i = 0; i < 4; i++) {
    int a, b;
    cin >> a >> b;
    if (i == 0) {
      x = a;
      y = b;
    } else if (x == a) {
      cout << (b - y) * (b - y) << endl;
    }
  }
}

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}