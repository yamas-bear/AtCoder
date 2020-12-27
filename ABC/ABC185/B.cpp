#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N, M, T, N_max;
    cin >> N >> M >> T;
    int A[M], B[M];
    N_max = N;
    bool ng = false;
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < M; i++)
    {
        if (i == 0)
        {
            N -= A[i];
            if (N <= 0)
                ng = true;
            N = N + B[i] - A[i];
            if (N > N_max)
                N = N_max;
        }
        else
        {
            N = N - A[i] + B[i - 1];
            if (N <= 0)
                ng = true;
            N = N + B[i] - A[i];
            if (N > N_max)
                N = N_max;
        }
        // cout << i << ":" << N << endl;
    }
    if (B[M - 1] < T)
    {
        N = N - T + B[M - 1];
        // cout << "final:" << N << endl;
    }
    if (N <= 0)
        ng = true;
    if (ng)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}