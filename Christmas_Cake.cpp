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
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
      int input;
      cin >> input;
      A.push_back(input);
    }
    for (int i = 0; i < A.size(); i++)
    {
      cout << A[i];
    }
    cout << endl;
    sort(A.begin(), A.end());
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
      sum += A[i] - i;
    }
    cout << sum << endl;
  }
}
