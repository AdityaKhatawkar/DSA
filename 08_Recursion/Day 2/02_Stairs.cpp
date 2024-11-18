#include <bits/stdc++.h> 
using namespace std;
int countDistinctWays(int n) {
    if(n < 0){
        return 0;
    }
    if (n == 0){
        return 1;
    }
    return countDistinctWays(n-1) + countDistinctWays(n-2); //because we reach the destination by climbing either 1 stair or 2 stairs.
}

int main()
{
    int n = 5;
    int ans = countDistinctWays(n);
    cout << ans << endl;
}