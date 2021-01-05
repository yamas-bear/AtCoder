#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, cnt = 0, sum = 0; //intは2の10乗までしか格納できない
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cnt = b[i] - a[i] + 1;
        sum += (a[i] + b[i]) * cnt / 2;
    }
    cout << sum << endl;
    return 0;
}