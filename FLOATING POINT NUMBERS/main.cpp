#include <bits/stdc++.h>

using namespace std;

// // comparing with relational operator ==
// void compareFloatNum(double a, double b)
// {
//     if (a == b)
//     {
//         cout << "THE NUMBERS ARE EQUAL"
//              << "\n";
//     }
//     else
//     {
//         cout << "THE NUMBERS ARE NOT EQUAL"
//              << "\n";
//     }
// }

// comparing floating numbers correctly
// 1e-9 = 10^-9
void compareFloatNum(double a, double b)
{
    if (abs(a - b) < 1e-9)
    {
        cout << "THE NUMBERS ARE EQUAL"
             << "\n";
    }
    else
    {
        cout << "THE NUMBERS ARE NOT EQUAL"
             << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a = (0.3 * 3) + 0.1;
    double b = 1;
    compareFloatNum(a, b);
}
