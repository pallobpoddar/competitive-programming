#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n;
  cin >> n;
  char c;
  cin >> c;
  unordered_map<char, vector<string>> m;
  for (int i = 0; i < n * 2; i++)
  {
    string s;
    cin >> s;
    m[s[1]].push_back(s);
  }

  for (auto &p : m)
  {
    if (p.second.size() % 2 != 0 && p.first != c)
    {
      if (m[c].size() > 0)
      {
        string s = m[c].back();
        m[c].pop_back();
        p.second.push_back(s);
      }
      else
      {
        cout << "IMPOSSIBLE" << endl;
        return;
      }
    }
  }

  for (auto &p : m)
  {
    sort(p.second.begin(), p.second.end());
    for (int i = 0; i < p.second.size(); i += 2)
    {
      if (p.second[i][1] == c && p.second[i + 1][1] != c) swap(p.second[i], p.second[i + 1]);
      cout << p.second[i] << " " << p.second[i + 1] << endl;
    }
  }
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