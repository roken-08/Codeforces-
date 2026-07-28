#include <bits/stdc++.h>
using namespace std; 

#define int long long

using ll = long long;
using vi = vector<int>;


void solve() {
    int n; cin >> n;
    int x,y; cin >> x >> y;
    vector<vector<int>> ad(n+1);
    vi v(n+1);
    //input
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    //connecting nodes
    for(int i = 1; i <= n; i++){
        if(i+x <= n){
            ad[i].push_back(i+x);
            ad[i+x].push_back(i);
        }
        if(i+y <= n){
            ad[i].push_back(i+y);
            ad[i+y].push_back(i);
        }
    }
    //checking with bfs
    bool check = true;
    vector<bool> vis(n+1,false);
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            vis[i] = true;
            vi cv,ci;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int c = q.front();
                q.pop();
                cv.push_back(v[c]);
                ci.push_back(c);
                for(int e : ad[c]){
                    if(!vis[e]){
                        vis[e] = true;
                        q.push(e);
                    }
                }
            }
            sort(cv.begin(),cv.end());
                sort(ci.begin(),ci.end());
                if(ci != cv){
                    check = false;
                    break;
                }
        }
    } 

    if(check){
        cout << "YES" << endl;
        return;
    }else{
        cout << "NO" << endl;
        return;
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