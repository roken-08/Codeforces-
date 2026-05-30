#include <bits/stdc++.h>
using namespace std;

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n,m,k; cin >> n >> m >> k;
    int left = 1;
    int right = m;
    int mid = 0;
    int ans = 0;
    while(left <= right){
        mid = (left+right)/2;
        int cap = n*(m - m/(mid+1));
        if(cap < k){
            left = mid+1;
        }else if(cap >= k){
            ans = mid;
            right = mid-1;
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