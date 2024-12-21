#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t = 0;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    map<long long, long long> m;
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    long long sum = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
        v[i] *= 1;
      else
        v[i] *= -1;
      sum += v[i];
      if (m[sum])
      {
        cout << "YES" << endl;
        flag = true;
        break;
      }
      m[sum]++;
    }
    if (flag == false)
      cout << "NO" << endl;
  }
  return 0;
}