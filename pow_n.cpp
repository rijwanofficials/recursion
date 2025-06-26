#include <bits/stdc++.h>
using namespace std;

double power(double x, long long n);
double myPow(double x, int n)
{
    long long N = n;
    if (N < 0)
    {
        x = 1 / x;
        N = -N;
    }
    return power(x, N);
}

double power(double x, long long n)
{
    if (n == 0)
        return 1.0;

    double half = power(x, n / 2);
    if (n % 2 == 0)
        return half * half;
    else
        return half * half * x;
}

int main()
{
    int n;
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the exponent n: ";
    cin >> n;

    double result = myPow(x, n);
    cout << x << "^" << n << " = " << result << endl;

    return 0;
}
