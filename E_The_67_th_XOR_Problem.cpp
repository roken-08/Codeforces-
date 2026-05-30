#include <bits/stdc++.h>
using namespace std;

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];   
    int maxa = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            maxa = max(maxa,v[i]^v[j]);
        }
    }
    cout << maxa << endl;
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