#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i,n) for (int i=0;i<(n);i++)

int main()
{
    double a,b;
    cin >> a >> b;
    // cout << (a-b)*100/a << endl;
    double ans = (a-b)*100/a;
    printf("%.20f\n",ans);
	return 0;
}
