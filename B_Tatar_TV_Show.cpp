#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n,k; cin >> n >> k;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            if(i+k >= n){
                cout << "NO" << endl;
                return;
            }else{
                if(s[i+k] == '0') s[i+k] = '1';
                else s[i+k] = '0';
            }
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