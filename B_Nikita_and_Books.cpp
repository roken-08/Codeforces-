#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        int mr = 0;
        if(i == 0) mr = 1;
        else mr = a[i-1]+1;
        if(a[i] < mr){
            cout << "NO" << endl;
            return;
        }
        if(i < n-1){
            int e = a[i]-mr;
            a[i+1] += e;
            a[i] = mr;
        }
    }
    cout << "YES" << endl;
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