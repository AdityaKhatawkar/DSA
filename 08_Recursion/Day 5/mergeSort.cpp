#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + ((e-s)/2);

    int len1 = mid - s + 1;
    int len2 = e - mid; 

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge 
    int index1 = 0;
    int index2 = 0; 
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;

}


void MergeSort(int* arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }

    int mid = s + ((e-s)/2);

    //left part sort
    MergeSort(arr,s,mid);

    //right part sort
    MergeSort(arr,mid+1,e);

    //merge 
    merge(arr,s,e);

}

int main()
{
    int arr[5] = {5, 3, 1, 2, 4};
    int n = 5;
    MergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}