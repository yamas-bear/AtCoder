#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    ll n, C;
    cin >> n >> C;
    map<int, ll> events;
    rep(i, n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        events[a] += c;
        events[b + 1] -= c;
    }
    ll sum = 0;
    ll ans = 0;
    int pre = 0;
    for (auto event : events)
    {
        ans += min(C, sum) * (event.first - pre);
        sum += event.second;
        pre = event.first;
    }
    cout << ans << endl;
    return 0;
}