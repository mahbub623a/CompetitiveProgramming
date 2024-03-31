/*
    Mahbubur Rahman
    United International University
*/

/*
    https://www.codechef.com/JAN15/problems/GCDQ#:~:text=You%20will%20be%20given%20Q,remaining%20array%20is%20non%20empty.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void goal()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);

    int forward[n + 10];
    int backward[n + 10];
    forward[0] = backward[n + 1] = 0;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
        forward[i] = __gcd(forward[i - 1], arr[i]);

    for (int i = n; i >= 1; i--)
        backward[i] = __gcd(backward[i + 1], arr[i]);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
    }
}

int main()
{
    goal();
    return 0;
}