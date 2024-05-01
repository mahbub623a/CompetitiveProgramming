#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// Lambda function
    cout << [](int x)
    { return x + 2; }(2)
         << endl;

    auto Sum = [](int x, int y)
    { return x + y; };
    cout << Sum(5, 5) << "\n";

    vector<int> v = {5,6,7};
    // all_of -> all value should be true for condition to get output true
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;

    // any_of -> if any of this value is true, output will be true
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;

    //  none_of -> opposite of all_of
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x > 0; })
         << endl;

    return 0;
}