#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int max(vector<int> v)
{
    int maxVal = 0; // 整数最小値
    for (int i = 0; i < (int)v.size(); ++i)
    {
        if (v[i] > maxVal)
            maxVal = v[i];
    }
    return maxVal;
}

int main()
{
    int n, max_num = 0, hyp_num = 0, element_max = 0, ans = 0, d;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {

        cin >> d;
        a[i] = d;
    }
    element_max = max(a);
    //小数点でも問題ない。割り切れさえすれば。
    for (int j = 2; j < 1000; j++)
    {
        hyp_num = 0; //初期化

        for (int i = 0; i < n; i++)
        {

            if (a[i] % j == 0)
            {
                hyp_num++;
            }
        }
        if (hyp_num > max_num)
        {
            max_num = hyp_num;
            ans = j;
        }
    }
    cout << ans << endl;
}