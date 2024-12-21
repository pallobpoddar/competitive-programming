#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      sum += a;
    }
    if (floor(sqrt(sum)) == sqrt(sum)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}