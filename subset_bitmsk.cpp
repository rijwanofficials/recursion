#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int pwr = 1 << n;
    vector<int> arr(n);
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < pwr; i++)
    {
        string binary = bitset<10>(i).to_string();
        binary = binary.substr(10 - n);
        for (int j = 0; j < n; j++)
        {
            if (binary[j] == '1')
            {
                cout << "[" << arr[j] << "]" << " ";
            }
        }
        cout << endl;
    }
}
