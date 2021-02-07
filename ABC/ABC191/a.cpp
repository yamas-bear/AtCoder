#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
      int v, t, s, d;
      cin >> v >> t >> s >> d;
      if (v * s < d || v * t > d)
            cout << "Yes" << endl;
      else
            cout << "No" << endl;
      return 0;
}