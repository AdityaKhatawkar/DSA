// https://leetcode.com/problems/sqrtx/description/



#include<iostream>
using namespace std;

long long int sqrtInteger(int s, int e, int n) {
    if(s > e){
        return e;
    }
    long long int mid = s + ((e-s)/2);
    long long int square = mid * mid;

    if(square == n){
        return mid;
    }

    else if(square < n){
        return sqrtInteger(mid+1, e, n);
    }
    else{
        return sqrtInteger(s,mid-1,n);
    }


        

}

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(0,n,n);
    cout <<" Answer is " << tempSol << endl;

    return 0;
}