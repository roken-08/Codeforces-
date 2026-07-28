#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi v(n);
    int oc = 0, tc = 0, trc = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1) oc++;
        if(v[i] == 2) tc++;
        else trc++;
    }
    //first
    if(oc == 0){
        cout << "NO" << endl;
        return;
    }
    oc--;
    //middle
    if(oc == 0 && tc == 0){
        cout << "NO" << endl;
        return;
    }else{
        if(oc > 0) oc--;
        else tc--;
    }
    if(oc > 0 || tc > 0 || trc > 0){
        cout << "YES" << endl;
        return;
    }else{
        cout << "NO" << endl;
        return;
    }
    

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