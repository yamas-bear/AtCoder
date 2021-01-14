#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

string substrBack(string str, size_t pos, size_t len)
{
    const size_t strLen = str.length();

    return str.substr(strLen - pos, len);
}

int main()
{
    string s;
    cin >> s;
    string sample = substrBack(s, 1, 1);
    if ("s" == sample)
    {
        cout << s << "es" << endl;
    }
    else
    {
        cout << s << "s" << endl;
    }
    return 0;
}