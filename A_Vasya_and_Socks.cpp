#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ini = n;
    int ans = 0;
    while(ini > 0){
            ini--;
            ans++;
        if(ans%m == 0){
            ini++;
        }
    }
    cout << ans;
}