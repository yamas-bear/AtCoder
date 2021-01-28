#include <bits/stdc++.h>
using namespace std;
#define longlong = ll;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

void print(const vector<int> &v)
{
    for_each(v.begin(), v.end(), [](int x) {
        cout << x << " ";
    });
    cout << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int t[8][8];
    rep(i, n) rep(j, n) cin >> t[i][j];
    vector<int> p; //配列のインデックスを格納する配列。スタートは1で固定なので，1,2,3(2番目、3番目、4番目)の数字を並べ替えれば良い
    for (int i = 1; i < n; i++)
        p.push_back(i);
    int ans = 0;
    do
    {
        // print(p);
        int tot = t[0][p[0]]; //最初のノードに移動
        rep(i, n - 2) tot += t[p[i]][p[i + 1]];
        tot += t[p.back()][0]; //最後のノードから1に戻る
        if (tot == k)
            ans++;
    } while (next_permutation(p.begin(), p.end())); //順列を生成する。
    cout << ans << endl;
    return 0;
}
