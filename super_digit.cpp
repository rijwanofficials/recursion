// Recursive digit Sum
// super Digit if x<10 then it's x itself if x>9 then sum of digit will be super digit
#include <bits/stdc++.h>
using namespace std;
int superDigit = 0;
void printsuperDigit(string number)
{
    if (number.length() == 1)
    {
        cout << "Super Digit: " << number << endl;
        return;
    }
    int sum = 0;
    for (char c : number)
    {
        sum += c - '0';
    }
   printsuperDigit(to_string(sum)); // recursive call with the digit sum
}

int main()
{
    string number;
    cout << "Enter the number: ";
    cin >> number;
    printsuperDigit(number);
}