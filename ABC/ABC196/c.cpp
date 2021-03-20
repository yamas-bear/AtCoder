#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    ll n, num = 0, hyp = 1;
    cin >> n;
    while (1)
    {
        string hikaku = to_string(hyp) + to_string(hyp);
        if (stoll(hikaku) <= n)
        {
            num++;
            hyp++;
        }
        else
        {
            break;
        }
    }
    cout << num << endl;
    return 0;
}