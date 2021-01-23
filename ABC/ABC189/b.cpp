#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    ll n, x;
    cin >> n >> x;
    x = x * 100;
    vector<ll> v(n), p(n);
    ll sum = 0;
    rep(i, n)
    {
        cin >> v[i] >> p[i];
    }
    rep(i, n)
    {
        sum += v[i] * p[i];
        if (sum > x)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}