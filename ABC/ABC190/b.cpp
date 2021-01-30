#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    ll n, s, d;
    cin >> n >> s >> d;
    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    rep(i, n)
    {
        if (x[i] < s && y[i] > d)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
