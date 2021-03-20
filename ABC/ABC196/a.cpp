#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max1, max2;
    max1 = max(a - c, a - d);
    max2 = max(b - c, b - d);
    cout << max(max1, max2) << endl;
}