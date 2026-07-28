#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n,c; cin >> n >> c;
    vi v(n);
    int l = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < c) l++;
    }
    sort(v.begin(),v.end());
    int ans = 0;
    if(l > n/2){
        for(int i = n/2; i < n; i++){
            ans += v[i]-c;
        }
    }else{
        for(int i = l; i < n; i++){
            ans += v[i]-c;
        }
    }
    cout << ans << endl;
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