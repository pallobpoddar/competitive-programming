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
    string s;
    cin >> s;
    int i = 0;
    vector<string> syll;
    while (i < s.size())
    {
      if (s[i + 3] == 'a' || s[i + 3] == 'e')
      {
        syll.push_back(s.substr(i, 2));
        i += 2;
      }
      else
      {
        syll.push_back(s.substr(i, 3));
        i += 3;
      }
    }

    for (int i = 0; i < syll.size(); i++)
    {
      if (i == syll.size() - 1)
      {
        cout << syll[i] << endl;
      }
      else
        cout << syll[i] << ".";
    }
  }
  return 0;
}