#include<iostream>
using namespace std;

int factorial(int n){
    //base case 
    if(n == 0)
        return 1;
    
    int choti = factorial(n-1);
    int badi = n * choti;

    return badi;
}


int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of "<< n << " is " << ans << endl;
                   
    return 0;
}