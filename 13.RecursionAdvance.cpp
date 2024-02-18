// https://leetcode.com/problems/subsets/description/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> allSubset;
void generate(vector<int> &subset, int i, vector<int> &nums)
{
    // base case
    if (i == nums.size())
    {
        allSubset.push_back(subset);
        return;
    }

    // Not takin the current value
    generate(subset, i + 1, nums);

    // taking the value
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}

int main()
{
    vector<int> subset;
    vector<int> nums = {1, 2, 3};

    generate(subset, 0, nums);

    for (auto &&sub : allSubset)
    {
        for (auto &&s : sub)
        {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}