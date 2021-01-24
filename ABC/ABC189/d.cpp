#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int n;
    cin >> n;
    vector<ll> dp(2, 1);
    rep(i, n)
    {
        string s;
        cin >> s;
        vector<ll> p(2);
        swap(dp, p); //dpとpを入れ替える
        rep(j, 2) rep(x, 2)
        {
            int nj = j;
            if (s == "AND")
                nj &= x;
            else
                nj |= x;
            dp[nj] += p[j];
        }
    }
    cout << dp[1] << endl;
    return 0;
}
