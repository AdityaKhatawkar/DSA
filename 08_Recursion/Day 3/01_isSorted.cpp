#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 0 || n == 1){ //check if array is empty or just has 1 element
        return true;
    }
    if(arr[0] > arr[1]){ //check for first 2 elements
        return false;
    }
    else{
        bool ans = isSorted(arr+1 , n-1); //check for the remaining part removing the first element
        return ans;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,3};
    if(isSorted(arr,5)){
        cout << "Array is sorted" << endl;
    }
    else 
        cout << "Array is not sorted" << endl;
    return 0;
}