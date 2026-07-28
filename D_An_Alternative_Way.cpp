#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi a(n),b(n);
    for(int i = 0; i < n; i++) cin>> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    vi d(n); for(int i = 0; i < n; i++) d[i] = a[i]-b[i];
    vi an(n,0);
    for(int i = 0; i < n-1; i++){
        if(d[i] == 0) continue;
        if(i == 0 && d[i] > 0){
            cout << "NO" << endl;
            return;
        }
        if(d[i] < 0){
            d[i+1] -= abs(d[i]);
            d[i] = 0;
        }
        if(i!=0 && d[i] > 0 && d[i-1] == 0){
            cout << "NO" << endl;
            return;
        }
    }
    if(d == an){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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