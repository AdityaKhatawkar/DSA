#include<iostream>
using namespace std;

int arraySum(int arr[], int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return arr[0];
    }

    int sum = 0;
    sum += arraySum(arr+1,n-1) + arr[0];
    return sum;
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int ans = arraySum(arr,n);
    cout << "Sum of the elements is: " << ans << endl;
    return 0;
}