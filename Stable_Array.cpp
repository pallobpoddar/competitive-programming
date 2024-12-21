// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t = 0;
//   cin >> t;
//   while (t--) {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//       cin >> v[i];
//     }
//     int max = 0;
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//       if (v[i] > max) {
//         max = v[i];
//         count = i;
//       }
//     }
//     cout << count << endl;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
vector<int> recursion(vector<int> v);

int main()
{
  int t = 0;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    int count = 0;
    vector<int> result(n);
    result = recursion(v);
    while (result != v)
    {
      count++;
      v = result;
      result = recursion(v);
    }
    cout << count << endl;
  }
  return 0;
}

vector<int> recursion(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] < v[i + 1])
    {
      v[i] = v[i + 1];
    }
  }
  return v;
}