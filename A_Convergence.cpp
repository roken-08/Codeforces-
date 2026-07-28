#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


/*
in asc order : 1 2 3 4 5 6 calling to median better? 
with repeated elements -> better to call there allways? 
1 1 2 6 5 3 1
*/


void solve() {
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int med = v[n/2];
    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < med) l++;
        else if(v[i] > med) r++;
    }
    cout << max(l,r) << endl;
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