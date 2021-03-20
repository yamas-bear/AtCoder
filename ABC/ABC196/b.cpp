#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

vector<string> split(string str, string separator)
{
    if (separator == "")
        return {str};
    vector<string> result;
    string tstr = str + separator;
    long l = tstr.length(), sl = separator.length();
    string::size_type pos = 0, prev = 0;

    for (; pos < l && (pos = tstr.find(separator, pos)) != string::npos; prev = (pos += sl))
    {
        result.emplace_back(tstr, prev, pos - prev);
    }
    return result;
}

int main()
{
    string x;
    vector<string> ans;
    cin >> x;
    ans = split(x, ".");
    cout << ans[0] << endl;
}