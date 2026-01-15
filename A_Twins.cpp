#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        sum += temp;
        arr.push_back(temp);
    }

    sort(arr.rbegin(),arr.rend());
    int ans = 0;
    int c = 0;
    int i = 0;
    while(c <= sum && i < n){
        c += arr[i];
        ans++;
        sum -= arr[i];
        i++;
    }
    cout << ans;
}