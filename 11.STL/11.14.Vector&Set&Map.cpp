#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {4, 5, 5, 25, 7, 8};
    sort(v.begin(), v.end());
    printVector(v);

    auto it = lower_bound(v.begin(), v.end(), 5);
    if (it == v.end())
    {
        cout << "Not Found\n";
        return 0;
    }
    cout << (*it) << endl;

    set<int> set = {4, 5, 5, 25, 7, 8};
    auto s = set.upper_bound(7);
    cout << (*s) << endl;

    /// Map -> here LB and UB only applicable for key not value
    map<int, int> map;
    auto m = map.lower_bound(5);

    return 0;
}