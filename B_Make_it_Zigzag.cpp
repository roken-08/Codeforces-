#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    int ans = 0;
    vi pfm(n);
    pfm[0] = v[0];
    for(int i = 1; i < n; i++){
        pfm[i] = max(pfm[i-1],v[i]);
    }
    for(int i = 0; i < n; i+= 2){
        int d = -1;
        if(i > 0){
            d = max(d,v[i]-pfm[i-1]);
        }
        if(i < n-1){
            d = max(d,v[i]-pfm[i+1]);
        }
        ans += d+1;
    }
    cout << ans << endl;

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