#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int n, min = 0, max = 0, ans;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) { cin >> a[i]; }
    rep(i, n) { cin >> b[i]; }
    max = *max_element(a.begin(), a.end());
    min = *min_element(b.begin(), b.end());
    if (0 > min - max + 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << min - max + 1 << endl;
    }
    // ans = max(0, min - max + 1);
    // cout << ans << endl;
    return 0;
}
