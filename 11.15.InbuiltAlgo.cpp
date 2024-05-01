#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> v = {2, 3, 1, 6, 7, 6};

    // all operation works in O(n)
    int min = *min_element(v.begin() + 3, v.end()); /// skip 3 value from begin
    cout << min << endl;

    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

    /// Find sum of array/vector
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;

    /// count frequency
    int freq = count(v.begin(), v.end(), 6);
    cout << freq << "\n";

    /// find value
    auto it = find(v.begin(), v.end(), 6);
    it != v.end() ? cout << "Found\n" : cout << "Not found\n";

    reverse(v.begin(), v.end());
    printVector(v);

    string s = "abcde";
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}