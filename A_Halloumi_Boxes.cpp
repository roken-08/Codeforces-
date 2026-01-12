#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        vector<int> c(v);
        sort(c.begin(),c.end());
        if(k == 1 && v != c) cout << "NO" << endl;
        else{
            cout << "YES\n";
        }
    }
}