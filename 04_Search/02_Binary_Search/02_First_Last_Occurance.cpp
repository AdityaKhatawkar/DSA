// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

/*

#include <bits/stdc++.h> 

int firstOcc(vector<int>& arr, int n, int k){
    int i = 0, j = n-1;
    int ans = -1;
    int mid;
    while(i <= j){
        mid = i + ((j-i)/2);
        if(k == arr[mid]){
            ans = mid;
            j = mid-1;
        }
        else if(k > arr[mid]){
            i = mid+1;
        }
        else if(k < arr[mid]){
            j = mid-1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int k){
    int i = 0, j = n-1;
    int ans = -1;
    int mid;
    while(i <= j){
        mid = i + ((j-i)/2);
        if(k == arr[mid]){
            ans = mid;
            i = mid+1;
        }
        else if(k > arr[mid]){
            i = mid+1;
        }
        else if(k < arr[mid]){
            j = mid-1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr,n,k);
    p.second = lastOcc(arr,n,k);
    return p;
}

 */