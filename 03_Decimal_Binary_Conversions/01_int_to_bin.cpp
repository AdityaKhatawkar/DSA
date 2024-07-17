#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 1; // Start with the multiplier 1 (10^0)

    while (n != 0)
    {
        int bit = n & 1;
        ans += bit * i;

        n = n >> 1;
        i *= 10; // Update multiplier to the next power of 10
    }

    cout << "Answer is " << ans << endl;
    return 0;
}
