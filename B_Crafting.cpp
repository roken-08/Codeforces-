#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;




void solve() {
    int n; cin >> n;
    vi a(n),b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    vi s(n);
    bool check = false;
    int ms = INT_MAX;
    for(int i = 0; i < n; i++){
        s[i] = a[i]-b[i];
        if(check == false && s[i] < 0) check = true;
        else if(check == 1 && s[i] < 0){
            cout << "NO" << endl;
            return;
        }
       if(s[i] >= 0){
         ms = min(ms,s[i]);
       }
    }
    sort(s.begin(),s.end());
    if(s[0] >= 0){
        cout << "YES" << endl;
        return;
    }
    if(s[0] + ms < 0){
        cout << "NO" << endl;
        return;
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