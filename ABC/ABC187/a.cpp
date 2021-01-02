#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a, b, a_sum = 0, b_sum = 0, a_h = 0, b_h = 0, a_j = 0, b_j = 0, a_i = 0, b_i = 0;
    cin >> a >> b;
    a_h = a / 100;
    b_h = b / 100;
    a_j = (a - (a / 100) * 100) / 10;
    b_j = (b - (b / 100) * 100) / 10;
    a_i = (a - a_h * 100 - a_j * 10);
    b_i = (b - b_h * 100 - b_j * 10);
    a_sum = a_h + a_j + a_i;
    b_sum = b_h + b_j + b_i;
    if (a_sum >= b_sum)
    {
        cout << a_sum << endl;
    }
    else
    {
        cout << b_sum << endl;
    }
}