#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string s;
    cin >> s;
    if(s.substr(0,1)=="R" && s.substr(1,1)=="R" && s.substr(2,1)=="R") cout << 3 << endl;
    else if(s.substr(0,1)=="R" && s.substr(1,1)=="R") cout << 2 << endl;
    else if(s.substr(1,1)=="R" && s.substr(2,1)=="R") cout << 2 << endl;
    else if(s.substr(0,1)=="R" || s.substr(1,1)=="R" || s.substr(2,1)=="R") cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}