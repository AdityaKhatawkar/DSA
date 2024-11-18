#include<iostream>
using namespace std;

int CalculatePower(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    return a * CalculatePower(a, b-1);
}

int main()
{
    int a,b;
    cin >> a >> b;
    int ans = CalculatePower(a, b);
    cout << "a^b = " << ans << endl;               
    return 0;
}