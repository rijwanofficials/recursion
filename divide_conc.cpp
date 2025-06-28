#include <bits/stdc++.h>
using namespace std;
int maxbydivideConcur(int i, int j, vector<int> &Arr)
{
    if (i == j)
    {
        return Arr[i];
    }
    int m = (i + j) / 2;
    return max(maxbydivideConcur(i, m, Arr), maxbydivideConcur(m + 1, j, Arr));
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> Arr(n);
    cout << "Enter the Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    int Maximum = maxbydivideConcur(0, n - 1, Arr);
    cout << "Maximum of Array " << Maximum;
    return 0;
}
