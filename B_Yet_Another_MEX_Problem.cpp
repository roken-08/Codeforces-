#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n,k; cin >> n >> k;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    int m = 0;
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        if(v[i] == m) m++;
    }
    cout <<  min(m,k-1) << endl;
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