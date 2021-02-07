#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    ll n, x, hyp;
    cin >> n >> x;
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> hyp;
        if (hyp != x)
        {
            cout << hyp << " ";
        }
    }
    cout << endl;
    return 0;
}