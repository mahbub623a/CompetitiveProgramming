#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end(), compare); /// we can change the default behaviour by using comparator

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " ";
        cout << v[i].second << endl;
    }

    return 0;
}