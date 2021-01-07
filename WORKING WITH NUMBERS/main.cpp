#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);

     long long x = 123456789123456789LL;
     cout << x << "\n";

     // WRONG OUTPUT
     int p = 123456789;
     long long q = p * p;
     cout << 'Wrong output' << q << '\n';

     // right output
     int a = 123456789;
     long long b = (long long)a * a;
     cout << "b=" << b;
     cout << "\n";

     // right output
     long long r = 123456789;
     long long s = r * r;
     cout << "s=" << s;
     cout << "\n";

     cout << "Hello world!"
          << "\n";
     return 0;
}
