#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int a[10010];
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0)
    {
        if (b - a < 0)
        {
            cout << "Takahashi" << endl;
        }
        else
        {
            cout << "Aoki" << endl;
        }
    }
    else
    {
        if (a - b < 0)
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }
    return 0;
}
