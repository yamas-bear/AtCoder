#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N, W, i = 0;
    cin >> N >> W;
    while (1)
    {
        if (N >= W * i && N < W * (i + 1))
        {
            break;
        }
        i++;
    }

    cout << i << endl;
}