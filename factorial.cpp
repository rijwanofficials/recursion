#include <bits/stdc++.h>
using namespace std;
long long fact(int N)    //made long long for bigger numbers
{
    if (N == 0)
    {
        return 1;
    }
    return N * fact(N - 1);
}
int main()
{
    int N;
    cout << "Enter the number for factorial ";
    cin >> N;
    long long ans = fact(N);
    cout << ans;
}