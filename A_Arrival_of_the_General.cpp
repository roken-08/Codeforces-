#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int mh = INT_MIN;
    int mi = INT_MAX;
    int i1 = -1;
    int i2 = -1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] >= mh){
            if(arr[i] == mh){
                i1 = min(i1,i);
            }else{
                i1 = i;
            }
            mh = arr[i];
        }
        if(arr[i] <= mi){
            if(mi == arr[i]){
                i2 = max(i2,i);
            }else{
                i2 = i;
            }
            mi = arr[i];
        }
    }
    int ans = (i1) + ((n-1)-i2);
    if (i1 < i2) cout << ans;
    else{
        cout << ans-1;
    }

}