// #include <bits/stdc++.h>
// using namespace std;
// void combineallletters(string temp, string &digits, int index, vector<vector<char>> &digitMap, vector<string> &ans)
// {
//     if (index == digits.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     for (int i = 0; i < digitMap[digits[index] - '2'].size(); i++)
//     {
//         combineallletters(temp + digitMap[digits[index] - '2'][i], digits, index + 1, digitMap, ans);
//     }
// }
// int main()
// {
//     string digits;
//     vector<vector<char>> digitMap;

//     vector<string> ans;
//     digitMap.push_back({'a', 'b', 'c'});
//     digitMap.push_back({'d', 'e', 'f'});
//     digitMap.push_back({'g', 'h', 'i'});
//     digitMap.push_back({'j', 'k', 'l'});
//     digitMap.push_back({'m', 'n', 'o'});
//     digitMap.push_back({'p', 'q', 'r', 's'});
//     digitMap.push_back({'t', 'u', 'v'});
//     digitMap.push_back({'w', 'x', 'y', 'z'});
//     cout << "Enter the digit ";
//     cin >> digits;
//     combineallletters("", digits, 0, digitMap, ans);
//     cout << "Results:\n";
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// we can use char array temp in place of an empty string for saving space

#include <bits/stdc++.h>
using namespace std;
void combineallletters(vector<char> temp, string &digits, int index, vector<vector<char>> &digitMap, vector<string> &ans)
{
    if (index == digits.size())
    {
        ans.push_back(string(temp.begin(), temp.end()));
        return;
    }
    for (int i = 0; i < digitMap[digits[index] - '2'].size(); i++)
    {
        temp.push_back(digitMap[digits[index] - '2'][i]);
        combineallletters(temp, digits, index + 1, digitMap, ans);
        temp.pop_back(); // backtrack
    }
}
int main()
{
    string digits;
    vector<vector<char>> digitMap;
    vector<string> ans;
    digitMap.push_back({'a', 'b', 'c'});
    digitMap.push_back({'d', 'e', 'f'});
    digitMap.push_back({'g', 'h', 'i'});
    digitMap.push_back({'j', 'k', 'l'});
    digitMap.push_back({'m', 'n', 'o'});
    digitMap.push_back({'p', 'q', 'r', 's'});
    digitMap.push_back({'t', 'u', 'v'});
    digitMap.push_back({'w', 'x', 'y', 'z'});
    cout << "Enter the digit ";
    cin >> digits;

    vector<char> temp(digits.length() + 1);
    combineallletters(temp, digits, 0, digitMap, ans);
    cout << "Results:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}