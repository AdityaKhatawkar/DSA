#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " under modulo " << MOD << " is " << factorial(n) << endl;
    return 0;
}
