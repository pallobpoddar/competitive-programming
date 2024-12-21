#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int total = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (i >= arr.size() - x)
      arr[i] = arr[i] * -1;
    total += arr[i];
  }
  int sum = total;
  for (int i = 0; i < k; i++) {
    sum -= arr.back();
    arr.pop_back();
    int pos = arr.size() - x;
    if (pos >= 0) {
      sum -= 2 * arr[pos];
      arr[pos] *= -1;
    }
    if (sum > total) total = sum;
  }
  cout << total << endl;
}

int main()
{
  int t = 0;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}