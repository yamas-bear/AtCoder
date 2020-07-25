#include <bits/stdc++.h>
using namespace std;
#define longlong = ll;

int main()
{
    int r, g, b, k;

    cin >> r >> g >> b >> k;
    while (k != 0)
    {
        if (r < g && r < b && g < b)
        {
            b = b * 2;
        }
        else if (b <= r || b <= g)
        {
            b = b * 2;
        }
        else if (g <= r)
        {
            g = g * 2;
        }
        else
        {
            r = r * 2;
        }
        k--;
    }

    if (r < g && r < b && g < b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
