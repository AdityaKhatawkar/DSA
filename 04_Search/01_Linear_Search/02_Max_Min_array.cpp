#include<iostream>
#include <climits>
using namespace std;

int Find_Max(int arr[], int n){
    int m = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > m){
            m = arr[i];
        }
    }
    return m;
}        

int main()
{
    int arr[6] = {1,2,8,4,5,6};
    int m = Find_Max(arr,6);
    cout << m << " is the maximum element in the array."<< endl;
    return 0;
}