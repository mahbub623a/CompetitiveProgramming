#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a = 100000;
    double b = 100000;
    double c = a * b;
    cout << fixed << setprecision(0) << c;

    cout << "I'm up from scop \n";
    {
        cout << "I'm from scop \n";
    }
    cout << "I'm from out of scop";

    for (int i = 0; i < 1; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == 5)
                break; /// first loop will break
            cout << i << endl;
        }
        cout << "I'm from second for loop";
    }

    /// Question 1 -> print until we get 42
    while (true)
    {
        int n;
        cin >> n;
        if (n == 42)
            break;
        cout << n << endl;
    }

    int t;
    cin >> t;
    cin.ignore(); /// ignore the input problem when you have to take string after integer

    while (t--)
    {
        string str;
        getline(cin, str);
        cout << str << endl;
    }

    string str = "Mahbub";
    reverse(str.begin(), str.end());
    cout << str << endl;

    /// add a value in the last of a string
    str.push_back('R');
    cout << str << endl;

    return 0;
}