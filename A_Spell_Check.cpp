#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "Timru";
        sort(s.begin(),s.end());
        if(s != ans) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;
}