#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n); /// sort(start index, end index)
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";

    /// sorting use introSort = quick sort + heap sort + insertion sort

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}