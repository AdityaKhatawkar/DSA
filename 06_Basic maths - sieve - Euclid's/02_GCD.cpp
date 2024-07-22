// lcm(a,b) * gcd(a,b) = a*b

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    cout << "Enter two numbers: " << endl;
    int a, b;
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << ans << endl;
    return 0;
}