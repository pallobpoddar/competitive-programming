#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    
    // Input arrays
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    // Sort array b in ascending order
    sort(b.begin(), b.end());
    
    ll maxDiff = 0;
    
    // For each element in a, we want to pair it with either
    // the smallest or largest possible value from b to maximize difference
    vector<bool> used(m, false);
    vector<int> selectedB;
    
    // For each element in a, try both extremes from b
    for(int i = 0; i < n; i++) {
        // Try both the smallest and largest available numbers
        ll diffWithMin = abs(a[i] - b[0]);
        ll diffWithMax = abs(a[i] - b[m-1]);
        
        // Choose the one that gives larger difference
        if(diffWithMax > diffWithMin) {
            selectedB.push_back(b[m-1]);
            b.pop_back();
        } else {
            selectedB.push_back(b[0]);
            b.erase(b.begin());
        }
        m--;
    }
    
    // Calculate total difference
    for(int i = 0; i < n; i++) {
        maxDiff += abs(a[i] - selectedB[i]);
    }
    
    cout << maxDiff << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}