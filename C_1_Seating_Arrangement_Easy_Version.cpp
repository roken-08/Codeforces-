#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n,x,s; cin >> n >> x >> s;
    string f; cin >> f;
    int ans = 0;
    int a = 0, e = 0, i = 0;
    for(char c : f){
        if(c == 'A') a++;
        else if(c == 'E') e++;
        else i++;
    }
    //first assign all ambi
    int at = min(a,x);
    ans += at;
    int slab = (at*s) - at;
    // keep extro at all possible places beside ambi
    if(e > slab){
        ans += slab;
        e -= slab;
    }else{
        ans += e;
    }
    //arrange introverts at remaining tables
    int rt = x-at;
    if(rt > 0){
        int itn =  min(rt,i);
        ans += itn;
        int sli = (itn*s) - itn;
        if(e > 0) ans += min(e,sli);
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