#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi v(n+1,0);
    int curr = 1;
    if(n%2 == 0){
        cout << -1 << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        int idx = curr + i;
        if(v[idx%n] != 0){
            cout << -1 << endl;
            return;
        }
        v[idx%n] = i;
        curr++;
    }
    v[n] = n;
    for(int i = 1; i <= n; i++){
        cout << v[i] << " ";
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