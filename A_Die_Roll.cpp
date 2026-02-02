#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int maxp = max(x,y);
    int count = 0;
    for(int i = maxp;i<=6;i++)count++;
    int num = count;
    int dem = 6;
    while(num > 0 && dem > 0){
        if(dem%2 == 0 && num%2==0){
            dem = dem/2;
            num/=2;
        }
        else if(dem%3 == 0 && num%3==0){
            dem = dem/3;
            num/=3;
        }
        else{
            break;
        }
    }
    cout << num << "/" << dem;
}