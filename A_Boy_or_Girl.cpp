#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_map<char,int> mpp;
    for(char c : s){
        mpp[c]++;
    }
    int ans = mpp.size();
    if(ans%2 == 0) cout << "CHAT WITH HER!";
    else{
        cout << "IGNORE HIM!";
    }
}