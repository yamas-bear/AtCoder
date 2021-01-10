#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(pow(2, n)), b(pow(2, n)), index(pow(2, n));
    for (int i = 0; i < pow(2, n); i++)
    {
        cin >> a[i];
    }
    if (n == 1) //n=1のときはindexに何も振らずに単純に比較し処理を終了する
    {
        if (a[0] > a[1])
        {
            cout << 2 << endl;
            return 0;
        }
        else
        {
            cout << 1 << endl;
            return 0;
        }
    }
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < pow(2, n) / j; i += 2)
        {
            if (j == 1)
            {
                if (a[i] < a[i + 1])
                {
                    b[i / 2] = a[i + 1];
                    index[i / 2] = i + 1;
                }
                else
                {
                    b[i / 2] = a[i];
                    index[i / 2] = i;
                }
            }
            else
            {
                if (b[i] < b[i + 1])
                {
                    b[i / 2] = b[i + 1];
                    index[i / 2] = index[i + 1];
                }
                else
                {
                    b[i / 2] = b[i];
                    index[i / 2] = index[i];
                }
            }
        }
    }

    if (b[0] > b[1])
    {
        cout << index[1] + 1 << endl;
        return 0;
    }
    else
    {
        cout << index[0] + 1 << endl;
        return 0;
    }
}