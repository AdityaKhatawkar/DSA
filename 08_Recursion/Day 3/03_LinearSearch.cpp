#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int k){
    if(n == 0){
        return false;
    }

    if(arr[0] == k){
        return true;
    }
    else{
        bool remaining = LinearSearch(arr+1,n-1,k);
        return remaining;
    }
    
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int key = 6;
    bool ans = LinearSearch(arr,n,key);
    if(ans){
        cout << "Element is present in the array" << endl;
    }
    else 
        cout << "Element is not present in the array" << endl;
    return 0;
}