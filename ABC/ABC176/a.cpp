#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n,x,t,times=1;
    cin >> n >> x >> t;
    while(n>x*times) times++;
    // cout << times << endl;
    cout << times*t << endl;
    return 0;
}