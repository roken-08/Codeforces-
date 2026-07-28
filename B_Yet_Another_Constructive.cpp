#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


/*
i need to get k elements such that their sum is divisble by m
what if i just make them as 1,1,1,1,1..1,.k  is lets say m -3
then 1,1,x -> 2+x and is divisble by m..sum of k-1 elements is k-1
so x must be m-2..
so too fill remaining what if i just put 1
can i always put 1?
what if i make these some other elements



*/


void solve() {
    int n,k,m; cin >> n >> k >> m;
    vi v(n);
    if(m < k){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i = 1;i < k; i++) cout << 1 << " ";

    cout << m-(k-1) << " ";
    for(int i = k+1; i <= n; i++) cout << 1 << " ";
    cout << endl;
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