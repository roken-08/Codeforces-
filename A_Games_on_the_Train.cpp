#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi v(n);
    int mine = INT_MAX;
    int maxe = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mine = min(mine, v[i]);
        maxe = max(maxe,v[i]);
    }
    cout << (maxe+1)-mine << endl;
    return;
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