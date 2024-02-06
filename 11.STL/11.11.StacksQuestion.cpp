#include <bits/stdc++.h>
using namespace std;

/// https://www.hackerrank.com/challenges/balanced-brackets/problem

void solve()
{
    string s;
    cin >> s;

    stack<char> st;
    unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

    for (char bracket : s)
    {
        if (symbols[bracket] < 0)
            st.push(bracket);
        else
        {
            if (st.empty())
            {
                cout << "NO\n";
                return;
            }

            char top = st.top();
            st.pop();

            if (symbols[top] + symbols[bracket] != 0)
            {
                cout << "NO\n";
                return;
            }
        }
    }

    st.empty() ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}