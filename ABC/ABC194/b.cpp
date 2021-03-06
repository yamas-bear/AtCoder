#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i=0;i<(n);i++)

int main()
{
    ll n,amin=100000,bmin=100000,wamin,finalmin,sortamin,sortbmin;
    cin >> n;
    vector<ll> a(n),b(n),wa(n);
    rep(i,n){ 
    cin >> a[i] >> b[i];
    wa[i] = a[i] + b[i];
    }
    amin = *min_element(a.begin(),a.end());
    bmin = *min_element(b.begin(),b.end());
    wamin = *min_element(wa.begin(),wa.end());
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(amin+bmin!=wamin){
        cout << max(amin,bmin) << endl;
    }else{
            if(a[1]>b[1]){
                bmin = b[1];
            }else{
                amin = a[1];
            }
            if(wamin<max(amin,bmin)){
            cout << wamin << endl;
                   }else{
            cout << max(amin,bmin) << endl;}
        }
    
    // cout << finalmin << endl;
	return 0;
}
