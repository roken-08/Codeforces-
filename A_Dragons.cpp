#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , s;
    cin >> s >> n;
    vector<pair<int,int>> mat;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mat.push_back({x, y});
    }
    sort(mat.begin(), mat.end());
    bool ans = true;
    for(auto &it : mat){
        if(s > it.first){
            s += it.second;
            ans = true;
        }else{
            ans = false;
            break;
        }
    }

    
    if(ans) cout << "YES";
    else{
        cout << "NO";
    }
}