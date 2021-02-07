#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

/*天井と床を求める*/
void cf(double x, double r, int *low, int *high)
{

    *low = ceil(x - r);
    *high = floor(x + r);
}

int main(void)
{

    double a, b, r, p;
    int start, end, top, bottom, i, j, num;

    num = 0;

    // printf("a b r =");
    // scanf("%lf %lf %lf", &a, &b, &r);
    cin >> a >> b >> r;
    // a = a * 10000;
    // b = b * 10000;
    // r = r * 10000;
    // cout << a << b << r;
    cf(a, r, &start, &end);

    for (i = start; i <= end; i++)
    {

        p = sqrt(pow(r, 2) - pow((a - (double)i), 2));

        cf(b, p, &bottom, &top);

        for (j = bottom; j <= top; j++)
        {
            num = num + 1;
        }
    }
    // printf("中心:(%lf,%lf) 半径:%lf 格子点の数: %d \n", a, b, r, num);
    cout << num << endl;

    return 0;
}