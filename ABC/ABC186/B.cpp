#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int H, W, minimum = 100, remove_num = 0;
    cin >> H >> W;
    int A[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
            if (minimum > A[i][j])
            {
                minimum = A[i][j];
            }
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (minimum < A[i][j])
            {
                remove_num += A[i][j] - minimum;
            }
        }
    }
    cout << remove_num << endl;
}