#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int m, h;
    cin >> m >> h;
    if (h % m == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}