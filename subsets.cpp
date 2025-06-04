#include <bits/stdc++.h>
using namespace std;
void allsubsets(vector<int> &nums, int n, int i, vector<int> &temp, int tempindex)
{
    if (i == n)
    {
        if (tempindex == 0)
            cout << "{}";
        for (int i = 0; i < tempindex; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }
    // call for Yes
    temp[tempindex] = nums[i];
    allsubsets(nums, n, i + 1, temp, tempindex + 1);

    // call for NO
    allsubsets(nums, n, i + 1, temp, tempindex);
}
int main()
{
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    cout << "Enter the element of array ";
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> temp(n + 1);
    allsubsets(nums, n, 0, temp, 0);
}