#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int key){
    int mid = s + ((e-s)/2);
    if(s > e)
        return false;
    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] > key){
        bool left = BinarySearch(arr,s,mid-1,key);
        return left;
    }
    else{
        bool right = BinarySearch(arr,mid+1,e,key);
        return right;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int key = 8;
    int s = 0;
    int e = n-1;
    bool ans = BinarySearch(arr,s,e,key);
    if(ans){
        cout << "Element is present in the array" << endl;
    }
    else 
        cout << "Element is not present in the array" << endl;
    return 0;
}