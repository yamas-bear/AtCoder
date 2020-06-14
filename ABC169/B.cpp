#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MX = 1e18; //10の18乗

int main(){
    ll  sum=1;
    int n;
    bool ng = false;
    cin >> n;
    
    for(int i=0;i<n;i++){
       ll  arr;
       cin >> arr;
       if(arr == 0){
           cout << 0 << endl;
           return 0;
       }
       if (ng || MX/sum < arr){//MX < sum * arr としてはダメ。理由はオーバーフローしてしまっているものを比較しているから。
           ng = true;
       }
       
       sum = sum * arr;
    }
   
     
    // if (sum > 1000000000000000000 || sum < 0){
    //     sum = -1;
    // }
    if(ng) cout << -1 << endl;
    else cout << sum << endl;
    return 0;
}