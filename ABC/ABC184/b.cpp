#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, x;
    string s;
    cin >> n >> x >> s;
    for (int i = 0; i < n; i++)
    {
        if (s.substr(i, 1) == "x" && x != 0)
        {
            x -= 1;
        }
        else if (s.substr(i, 1) == "x" && x == 0)
        {
            continue;
        }
        else
        {
            x += 1;
        }
    }
    cout << x << endl;
    return 0;
}