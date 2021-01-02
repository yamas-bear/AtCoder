#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, s_num = 0, s_sup_num = 0;
    bool find = false;
    cin >> n;
    string s[n], s_sup[n], hyp, ans;
    for (int i = 0; i < n; i++)
    {
        cin >> hyp;
        if (hyp.substr(0, 1) == "!")
        {
            s_sup[s_sup_num] = hyp;
            s_sup_num++;
        }
        else
        {
            s[s_num] = hyp;
            s_num++;
        }
    }
    for (int i = 0; i < s_num; i++)
    {
        if (!find)
        {
            for (int j = 0; j < s_sup_num; j++)
            {
                if (s[i].substr(0, 1) == s_sup[j].substr(1, 1))
                {
                    if (s[i] == s_sup[j].substr(1))
                    {
                        ans = s[i];
                        find = true;
                        break;
                    }
                }
            }
        }
        else
        {
            break;
        }
    }
    if (find)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "satisfiable" << endl;
    }
    return 0;
}