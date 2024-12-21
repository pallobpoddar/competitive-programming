#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
      int input;
      cin >> input;
      A.push_back(input);
    }
    sort(A.begin(), A.end());
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
      if (A[i] - i >= 0)
      {
        sum += A[i] - i;
      }
    }
    cout << sum << endl;
  }
}
