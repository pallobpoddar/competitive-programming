#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, f, a, b;
  cin >> n >> f >> a >> b;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  long long c = f - min(arr[0] * a, b);
  for (int i = 1; i < n; i++) {
    c -= min((arr[i] - arr[i - 1]) * a, b);
    if (c <= 0) break;
  }
  if (c > 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}