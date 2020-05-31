#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,ans;
    double b;
    cin >> a >> b;
    ans = b*100+0.5; //これはdoubleからlong long への型変換（キャスト）をしている
                     //このとき小数点以下は切り捨てなので0.5を足しておかないと
                     //計算結果がおかしくなる.例えば0.999999など
    a *= ans;
    a /= 100;
    printf("%lld\n", a); // lld:long long int (aがlldだから)
    return 0;
}

/*少数点以下は扱いたくない。理由としては切り捨てしたときに誤差が発生する危険性がある
今回は最大値が10なのでそこまで誤差が発生する危険性はないと考えることもできる

なぜ0.5や0.001などの微小値を足してあげないといけないのか？
例えばB=2.51などのときB×100=250.999999999999971....となる
*/