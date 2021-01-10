#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        if (x < y + 3)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    else
    {
        if (y < x + 3)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}