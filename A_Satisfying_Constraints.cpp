#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  long long min = LLONG_MIN, max = LLONG_MAX;
  vector<long long> arr;
  for (int i = 0; i < n; i++)
  {
    int a;
    long long x;
    cin >> a >> x;
    if (a == 1 && x > min)
      min = x;
    if (a == 2 && x < max)
      max = x;
    if (a == 3)
      arr.push_back(x);
  }
  long long count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] >= min && arr[i] <= max)
      count++;
  }
  long long result = max - min + 1 - count;
  if (result <= 0)
    cout << 0 << endl;
  else
    cout << result << endl;
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