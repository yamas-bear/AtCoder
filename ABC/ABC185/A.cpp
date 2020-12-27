#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a1, a2, a3, a4;
    vector<int> ans;
    cin >> a1 >> a2 >> a3 >> a4;
    ans.push_back(a1);
    ans.push_back(a2);
    ans.push_back(a3);
    ans.push_back(a4);
    cout << *min_element(ans.begin(), ans.end()) << endl;
}