#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, k;
    int a[1000000000], points[1000000000], now, kd;

    cin >> n >> k;

    for (ll i = 1; n >= i; i++)
    {
        cin >> a[i];
    }

    now = 2 * k - n; //一番下
    kd = k;
    while (kd != n)
    {
        points[kd] = 1;
        while (now <= kd)
        {
            points[kd] = points[kd] * a[now];
            now++;
        }
        kd++;
    }
    for (int m = 1; k + m > n; m++)
    {
        if (points[k + m] > points[k + m - 1])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
