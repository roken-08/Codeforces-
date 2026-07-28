#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    int h = 1e18;
    int c = 0, s = 0;
    for(int i = 0; i < n; i++){
        s += v[i];
        c++;
        int curr = max(s/c,v[i]);
        h = min(h,curr);
        cout << h << " ";
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