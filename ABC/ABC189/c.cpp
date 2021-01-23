#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int a[10010];
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int l = 0; l < n; l++)
    {
        int x = a[l];
        for (int r = l; r < n; r++)
        {
            x = min(x, a[r]);                //最小値を毎回更新していく感じ
            sum = max(sum, x * (r - l + 1)); //sumとの比較によって求める
        }
    }

    cout << sum << endl;
    return 0;
}
