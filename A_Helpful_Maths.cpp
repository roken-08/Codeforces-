#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> nums;
    for(char c : s){
        if(c != '+'){
            nums.push_back(c-'0');
        }
    }
    sort(nums.begin(),nums.end());
    int c = 0;
    for(int n : nums){
        cout << n;
        if(c != nums.size()-1){
            cout << '+';
        }
        c++;
    }

}
