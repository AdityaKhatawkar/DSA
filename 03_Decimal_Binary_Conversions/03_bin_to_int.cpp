#include<iostream>
#include<math.h>
using namespace std;
                   
int main()
{
    int n;
    int ans = 0, i = 0;
    cin >> n;
    while(n!=0){
        int bit = n%10;
        if (bit == 1){
            ans += pow(2,i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;
                   
    return 0;
}