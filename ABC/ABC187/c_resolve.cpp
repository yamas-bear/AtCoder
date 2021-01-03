#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    set<string> StringSet;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        //setには重複なしで追加されていく
        StringSet.insert(S[i]);
    }

    for (int i = 0; i < N; i++)
    {
        //StringSetに!S[i]が存在するかどうかを判定。返り値は0or1
        if (StringSet.count("!" + S[i]))
        {
            cout << S[i] << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;
}