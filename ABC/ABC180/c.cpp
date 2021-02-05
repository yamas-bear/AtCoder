#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
        else
        {
            continue;
        }
    }
    for (ll x : s)
    {
        cout << x << endl;
    }
    return 0;
}