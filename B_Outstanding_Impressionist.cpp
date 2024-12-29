#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  int input[n][2];
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++) {
    int l, w;
    cin >> l >> w;
    if (l == w) m[l]++;
    input[i][0] = l;
    input[i][1] = w;
  }

  string result = "";
  for (int i = 0; i < n; i++) {
    for (int j = input[i][0]; j <= input[i][1]; j++) {
      if (m.find(j) == m.end()) {
        result += '1';
        break;
      } else if (m[j] == 1 && j == input[i][1] && input[i][0] != input[i][1]) {
        result += '0';
        break;
      } else if (m[j] == 1 && input[i][0] == input[i][1]) {
        result += '1';
        break;
      } else if (m[j] >= 2) {
        result += '0';
        break;
      }
    }
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