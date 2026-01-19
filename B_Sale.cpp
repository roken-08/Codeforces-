#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int ans = 0;
    int count = 0;
    sort(v.begin(),v.end());
    for(int n : v){
        if(count < m){
            if(n < 0){
                ans += abs(n);
                count++;
            }else{
                break;
            }
        }
    }
    cout << ans;
}