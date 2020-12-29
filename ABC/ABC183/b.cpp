#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    double sx, sy, gx, gy, x;
    cin >> sx >> sy >> gx >> gy;
    x = (gx - sx) * sy / (sy + gy) + sx;
    printf("%.10f\n", x);
}