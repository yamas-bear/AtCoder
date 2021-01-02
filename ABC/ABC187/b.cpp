#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll x[n], y[n], cnt = 0;
    ll katamuki, x_up = 0, y_up = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            katamuki = 0;
            x_up = 0;
            y_up = 0;
            x_up = x[j] - x[i];
            y_up = y[j] - y[i];
            katamuki = y_up / x_up;
            // cout << katamuki << endl;
            if (katamuki >= -1 && katamuki <= 1)
            {
                if (katamuki == 1 || katamuki == -1)
                {
                    if (abs(y_up) == abs(x_up))
                    {
                        cnt++;
                    }
                }
                else
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}