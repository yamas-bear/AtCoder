#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i=0;i<(n);i++)

int main()
{
    ll n,sum=0,wa=0,hyp=0;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    for(int i=0;i<n-1;i++){
      hyp += a[i];
      wa += hyp*a[i+1];
      sum += 2*(a[i]*a[i]);
    }
    // cout << wa << endl;
    sum += 2*(a[n-1]*a[n-1]) - 2*wa;
    cout << sum << endl;
	return 0;
}
