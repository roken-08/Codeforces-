#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n,k; cin >> n >> k;
    int np = n*n - k;
    if((n*n)-1 == k){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(np > 0){
                if(i == 0 && j == 0) cout << "R";
                else if(i == 0 && j == 1) cout << "L";
                else if(i == 0) cout << "L"; 
                else cout << "U";              
                np--;
            }else{
                cout << "D"; 
            }
        }
        cout << endl;

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