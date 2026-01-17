#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> arr;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int ans = INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i = 0; i <= m-n; i++){
        int diff = 0;
        for(int j = i+1; j < i+n; j++){
            if(j == i+n-1){
                diff = arr[j] - arr[i];
                ans = min(ans,diff);
            }
        }
    }
    cout << ans;



}