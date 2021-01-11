#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    map<int, ll> samples;
    samples[0] = 345;
    samples[34] = 2345;
    for (auto sample : samples)
    {
        cout << sample.first << ":" << sample.second << endl;
    }
}