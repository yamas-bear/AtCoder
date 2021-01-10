#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, c, sum = 0, now_cost = 0;
    cin >> n >> c;
    vector<ll> a(3, n), b(3, n), cost(3, n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> cost[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (cost[i] < c)
        {
            now_cost = (b[i] - a[i]) * cost[i];
            sum += (b[i] - a[i]) * cost[i];
            cout << i << ":" << now_cost << endl;
        }
        else
        {
            now_cost = (b[i] - a[i]) * c;
            sum += (b[i] - a[i]) * c;
            cout << i << ":" << now_cost << endl;
        }
    }
    cout << sum << endl;
    return 0;
}