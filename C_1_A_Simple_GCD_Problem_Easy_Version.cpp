#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    vi a(n);
    vi b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int ans = 0;
    //first element
    if(a[1] % a[0] != 0) ans++;
    if(gcd(a[0],a[1]) == 1) ans++;
    //last element
    if(a[n-1] != a[n-2]){
        ans++;
    }
    for(int i = 1; i < n-2; i++){
        if(gcd(a[i],a[i+1]) == 1) ans++;
        else if(a[i] == a[i+1]) continue;
        else{
            if(a[i+1]%a[i] == 0){
                continue;
            }
            if(a[i] == a[i-1]) continue;
            else{
                ans++;
            }
        }
    }

    cout << ans << endl;
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