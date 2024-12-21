#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  bool flag = false;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] != 0) {
     flag = true; 
    }
  }
  if (flag == false) {
    cout << 0 << endl;
    return;
  }
  int i = 0, j = arr.size() - 1;
  while (i <= j) {
    if (arr[i] == 0) i++;
    else if (arr[j] == 0) j--;
    else break;
  }
  for (int k = i; k <= j; k++) {
    if (arr[k] == 0) {
      cout << 2 << endl;
      return;
    }
  }
  cout << 1 << endl;
  return;
}

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}