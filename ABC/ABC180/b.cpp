#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, mangattan_len = 0, chebishefu = 0, sum = 0, pre = 0;
    double yukuriddo = 0;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pre;
        x[i] = abs(pre);
        mangattan_len += abs(pre);
        sum += abs(pre) * abs(pre);
    }
    yukuriddo = sqrt(sum);
    chebishefu = *max_element(x.begin(), x.end());
    cout << mangattan_len << endl;
    printf("%.15f\n", yukuriddo);
    cout << chebishefu << endl;
}