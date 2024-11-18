#include <iostream>
using namespace std;

int partition(int * arr, int s, int e){

    int pivot = arr[s];

    int cnt = 0; //count numbers smaller than pivot to determine the correct position to place the pivot
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    } 

    //Place pivot in the right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left part needs to contain elements less than pivot 
    int i = s, j = e; 
    while(i < pivotIndex && j > pivotIndex){
        while(pivot >= arr[i]){
            i++;
        }

        while(pivot < arr[j]){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}


void QuickSort(int* arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }
    
    int p = partition(arr,s,e); //index of element that got its right position

    //laft part sort
    QuickSort(arr,s,p-1);

    //right part sort
    QuickSort(arr,p+1,e);
}

int main()
{
    int arr[5] = {5, 3, 1, 2, 4};
    int n = 5;
    QuickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}