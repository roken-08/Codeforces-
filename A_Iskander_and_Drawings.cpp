#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans=  0, cn = 0;
    for(char c : s){
        if(c == '*'){
            ans = max(ans,cn);
            cn = 0;
        }else{
            cn++;
        }
    }
    ans = max(ans,cn);
    cout << (ans+1)/2 << endl;
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