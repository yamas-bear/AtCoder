#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, cnt = 0;
    bool flg = false;
    cin >> n;
    vector<int> d1(n), d2(n);
    rep(i, n)
    {
        cin >> d1[i] >> d2[i];
    }
    rep(i, n)
    {
        if (d1[i] == d2[i])
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if (cnt == 3)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}