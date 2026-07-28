#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    int l = 1, r = n;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            cout << r << " ";
            r-= 2;
        }else{
            cout << l << " ";
            l+=2;
        }
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