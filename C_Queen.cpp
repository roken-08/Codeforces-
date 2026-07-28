#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vector<vector<int>> cd(n+1);
    vi c(n+1);
    for(int i = 1; i <= n; i++){
        int p;
        cin >> p >> c[i];
        if(p != -1){
            cd[p].push_back(i);
        }
    }
    bool ane = false;
    for(int i = 1; i <= n; i++){
        if(c[i] == 0) continue;
        bool ch = true;
        for(int d : cd[i]){
            if(c[d] == 0){
                ch = false;
                break;
            }
        }
        if(ch){
            cout << i << " ";
            ane = true;
        }
    }
    if(!ane){
        cout << -1 << endl;
    }
    cout << endl;
    return;


}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}