#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a, b, c;
    a = b = c = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int rsum = 0;
        cin >> a >> b >> c;
        rsum += (a+b+c);
        if(rsum >= 2) ans++; 
    }
    cout << ans;
}