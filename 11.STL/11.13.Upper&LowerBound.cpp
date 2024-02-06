#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 6;
    int arr[] = {4, 5, 5, 25, 7, 8};

    /// sort array -> if we don't sort array it will work in O(n) complexity rather than log(n)
    sort(arr, arr + n);
    printArray(arr, n);

    /* lower bound:
        1. It will return expected value's location. If the value are not in array it will return
           immediate bigger value's location
        2. If we input such a value which is not in array and don't even a bigger value exist it
           it will return (arr+n) location

        upper bound:
        1. It will always return bigger value's location of our expected value. If the bigger
           value does'nt exist it will return (arr+n) location
    */

   /// Lower bound
    int *lwr = lower_bound(arr, arr + n, 5);
    if (lwr == arr + n)
    {
        cout << "Not Found\n";
        return 0;
    }
    cout << (*lwr) << endl;

    /// Upper bound
    int *upr = upper_bound(arr, arr + n, 5);
    if (upr == arr + n)
    {
        cout << "Not Found\n";
        return 0;
    }
    cout << (*upr) << endl;

    return 0;
}