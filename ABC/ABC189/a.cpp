#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string c1;
    cin >> c1;
    if (c1.substr(0, 1) == c1.substr(1, 1))
    {
        if (c1.substr(0, 1) == c1.substr(2, 1))
        {
            cout << "Won" << endl;
            return 0;
        }
    }
    cout << "Lost" << endl;
    return 0;
}