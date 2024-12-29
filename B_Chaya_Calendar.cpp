#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int result = a[0];
  for (int i = 1; i < n; i++) {
    result = (result / a[i] + 1) * a[i];
  }
  cout << result << endl;
}

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}