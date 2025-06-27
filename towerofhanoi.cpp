#include <bits/stdc++.h>
using namespace std;
int Step = 0;
void towerofHanoi(int n, int src, int help, int desti)
{
    Step++;
    if (n == 1)
    {
        cout << "Move disk " << n << " from " << src << " to " << desti << endl;
        return;
    }
    towerofHanoi(n - 1, src, desti, help);
    cout << "Move disk " << n << " from " << src << " to " << desti << endl;
    towerofHanoi(n - 1, help, src, desti);
}
int main()
{
    int n;
    cout << "Enter the number of discs: ";
    cin >> n;
    towerofHanoi(n, 1, 2, 3);
    cout << Step;
}