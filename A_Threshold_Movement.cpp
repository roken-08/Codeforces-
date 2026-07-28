#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi v(n+1);
    vector<int> pos(n+1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        pos[i] = i;
    }
    int ik = v[0]+1;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j ) continue;
            if(v[j] < ik){
                pos[j] = j-1;
            }else if(v[j] > ik){
                pos[j] = j+1;
            }else{
                ik = v[j]+1;
            }
        }
    }
    if(pos[n] == n+1 || pos[1] == 0){
        cout << "NO" << endl;
        return;
    }
    for(int i = 1; i < n; i++){
        if(pos[i] == pos[i+1]){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
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