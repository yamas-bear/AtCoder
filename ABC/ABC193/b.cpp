#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i=0;i<(n);i++)

int main()
{
    ll n,ans=1000000000,hyp;
    cin >> n;
    vector<ll> a(n),p(n),x(n);
    rep(i,n) cin >> a[i] >> p[i] >> x[i]; 
    rep(i,n){
        hyp = x[i] - a[i];
        if(hyp>0)
        {
            // cout << hyp <<":";
            if(ans>p[i]){
                ans = p[i];
                // cout << x[i] << ":" << a[i] << ":" << ans << endl;
            }
        }
    }
    if(ans==1000000000){
        cout << -1 << endl;
    }else{
    cout << ans << endl;}
	return 0;
}
