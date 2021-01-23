#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 1; i < (n) + 1; i++)

int main()
{
    ll n, sum = 0, hyp = 0;
    cin >> n;
    // vector<ll> a(n);
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = i; j < n + 1; j++)
        {
            // ll min = *min_element(a.begin() + 1, a.begin() + 3);
            ll min = *min_element(a.begin() + i, a.begin() + j + 1);
            // cout << "min:" << min;
            hyp = (j - i + 1) * min;
            // cout << " "
            //      << "hyp:" << hyp;
            if (sum < hyp)
            {
                sum = hyp;
            }
            // cout << " "
            //      << "sum:" << sum << " i:" << i << " j:" << j << endl;
        }
    }
    cout << sum << endl;
    return 0;
}