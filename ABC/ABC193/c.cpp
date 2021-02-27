#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i=2;i<=(n);i++)

int main()
{
    ll n;
    set<ll> s;
    cin >> n;
    for(int i=2;pow(i,2)<=n;i++){
      for(int m=2;pow(i,m)<=n;m++){
            s.insert(pow(i,m));
            // cout << i << ":" << m << ":" << pow(i,m) << endl;
      }
    }
    cout << n-s.size() << endl;
	return 0;
}
