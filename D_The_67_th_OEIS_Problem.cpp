#include <bits/stdc++.h>
using namespace std;

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cout << (1LL<<i) << " ";
    }
    cout << endl;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}