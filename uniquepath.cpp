#include <iostream>
using namespace std;

int uniquePaths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
}

int main()
{
    int m, n;
    cout << "Enter the number of rows and column ";
    cin >> m >> n;
    cout << uniquePaths(m, n) << endl;
    return 0;
}
