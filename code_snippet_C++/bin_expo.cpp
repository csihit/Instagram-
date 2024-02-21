#include <iostream>

using namespace std;

int bin_expo(long long a, long long b)
{
int ans = 1;
while (b)
{
  if ((b & 1) == 1)
  {
   ans = ans*a;
   }

  a =a*1ll*a;
     b = b >> 1;
    }
return ans;
}
int main() {
    long long a, b;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the exponent (b): ";
    cin >> b;

    int result = bin_expo(a, b);
    cout << "Result of " << a << " raised to the power of " << b << " is: " << result << endl;
    return 0;
}