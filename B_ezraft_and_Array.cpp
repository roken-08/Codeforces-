#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n == 2){
        cout << -1 << endl;
        return;
    }
    if(n == 3){
        cout << 1 << " " << 2 << " " << 3;
        cout << endl;
        return;
    }
    vector<int> ans = {1,9,2,6};
    int sum = 18;
    for(int i = 5; i <= n; i++){
        ans.push_back(sum);
        sum += sum;
    }

    for(int i : ans){
        cout << i << " ";
    }
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