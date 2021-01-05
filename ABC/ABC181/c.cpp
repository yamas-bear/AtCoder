#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    vector<int> x, y;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int in1, in2;

        cin >> in1 >> in2;

        x.push_back(in1);
        y.push_back(in2);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int x1 = x[j] - x[i];
                int y1 = y[j] - y[i];
                int x2 = x[k] - x[i];
                int y2 = y[k] - y[i];

                //傾きが一致するならば
                if (x1 * y2 == x2 * y1)
                {
                    cout << "Yes" << endl;

                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
