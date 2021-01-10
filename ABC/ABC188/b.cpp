#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, sum = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
        // cout << sum << endl;
    }
    if (sum == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        cout << "No" << endl;
        return 0;
    }
}