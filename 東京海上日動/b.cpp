#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll a, v, b, w, t, apos, bpos;

    cin >> a >> v >> b >> w >> t;

    apos = a + v * t; //overflowになる可能背がある
    bpos = b + w * t; //overflowになる可能背がある

    if (apos >= bpos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

//acできなかった
/*解答

int main()
{
    int a, b, v, w, t, d, s;

    cin >> a >> v >> b >> w >> t;
    d = abs(a - b); //絶対値(aとbの距離)
    if (v <= w)
    {
        cout << "NO" << endl;
        return 0;
    }
    s = v - w;  //縮まる距離
    if (d <= (ll)s * t) //追いつけないなら
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}*/