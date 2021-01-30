#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int n, m, k, count = 0;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];
    map<int, int> checks, element_num;
    rep(i, k)
    {
        if (checks[c[i]] == 0)
        {
            checks[c[i]] = 1;
            bad_num[i] = 1;
        }
        else if (checks[d[i]] == 0)
        {
            checks[d[i]] = 1;
            bad_num[i] = 1;
        }
    }
    rep(i, m)
    {

        if (checks[a[i]] == 1 && checks[b[i]] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
