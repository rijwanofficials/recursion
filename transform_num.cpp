#include <bits/stdc++.h>
using namespace std;

bool found = false;
vector<int> finalPath;

void transformNum(int a, int b, vector<int> &path)
{
    if (a > b)
        return;

    if (a == b)
    {
        found = true;
        finalPath = path;
        return;
    }

    path.push_back(a * 2);
    transformNum(a * 2, b, path);
    path.pop_back();

    path.push_back(10 * a + 1);
    transformNum(10 * a + 1, b, path);
    path.pop_back();
}

int main()
{
    int a, b;
    cout << "Enter the 2 numbers: ";
    cin >> a >> b;

    vector<int> path;
    path.push_back(a);
    transformNum(a, b, path);

    if (found)
    {
        cout << "YES" << endl;
        cout << "Path: ";
        for (int num : finalPath)
        {
            cout << num << " ";
        }
        cout << endl;
        cout << "Length of the transformation sequence: " << finalPath.size() << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
