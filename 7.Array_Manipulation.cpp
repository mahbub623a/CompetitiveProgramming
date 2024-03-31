/*
    https://www.hackerrank.com/challenges/crush/problem
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N = 1e7 + 10;
long long int ar[N];

void Hack()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        ar[a] += d;
        ar[b + 1] -= d;
    }
    for (int i = 1; i <= n; i++)
        ar[i] += ar[i - 1];

    long long mx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (mx < ar[i])
            mx = ar[i];
    }
    cout << mx;
}

int main()
{
    Hack();
    return 0;
}