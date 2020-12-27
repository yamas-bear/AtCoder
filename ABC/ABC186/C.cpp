#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int ans = n;
    for (int i; i <= n; i++)
    {
        int x10 = i;
        int x8 = i;
        bool ng = false;
        for (int j = 0; j < 6; j++)
        {
            if (x10 % 10 == 7 || x8 % 8 == 7)
            {
                ng = true;
            }
            x10 /= 10;
            x8 /= 8;
        }
        if (ng)
        {
            ans--;
        }
    }
    cout << ans << endl;
}