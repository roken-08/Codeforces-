#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


/*
always put max element in first position
what to do about mex??
maybe put the element creating smallest mex at the start itself
if 0 is not present then it doesnt matter since 0 will always be the mex
but if 0 is present then put it at the 2nd position right after the max element


*/

void solve() {
    int n; cin >> n;
    vi v(n);
    int mi = 0, me = 0;
    int zi = -1;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]  > me){
            me = v[i];
            mi = i;
        }
        if(v[i] == 0){
            zi = i;
        }
    }
    swap(v[0],v[mi]);
    int ans = me*n;
    if(zi != -1) swap(v[zi],v[1]);
    int mex = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0) continue;
        else{
            mex++;
            ans += mex;
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