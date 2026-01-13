#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int fuel = arr[0];  
        for(int i = 1; i < n; i++){
            fuel = max(fuel, arr[i] - arr[i-1]);
        }
        fuel = max(fuel, 2 * (x - arr[n-1]));
        cout << fuel << endl;
    }
}
