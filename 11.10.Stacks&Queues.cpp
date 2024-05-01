#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s; /// we can use float,double, string, set, pair etc;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    queue<char> q;
    q.push('a');
    q.push('b');
    q.push('c');
    q.push('d');
    q.push('e');

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}