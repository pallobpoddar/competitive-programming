#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    for (int i = 0; i < 3; i++) {
      string s;
      cin >> s;
      if (s.find("?") != string::npos) {
        if (s.find("A") == string::npos) cout << "A" << endl;
        if (s.find("B") == string::npos) cout << "B" << endl;
        if (s.find("C") == string::npos) cout << "C" << endl;
      }
    }
  }
  return 0;
}