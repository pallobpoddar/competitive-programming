#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  for (int i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int sum = 0;
  for (int i = 0; i < 2 * n - 1; i = i + 2) {
    sum += min(a[i], a[i + 1]);
  }
  cout << sum << endl;
}

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}