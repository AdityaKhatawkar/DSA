#include<iostream>
using namespace std;



//works for both array an vector
void solve(int arr[], int start, int n){
    if(start >= n-1){
        return;
    }
    int mini = start;
    for(int i = start+1; i < n; i++){
        if(arr[i] < arr[mini]){
            mini = i;
        }
    }
    swap(arr[mini],arr[start]);
    solve(arr, start+1 ,n);
}


//my solution doesnt work for vectors
void SelectionSort(int arr[], int n)
{
    if(n <= 1){
        return;
    }
    int mini = 0;
    int start = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[mini]){
            mini = i;
        }
    }
    swap(arr[mini],arr[start]);
    SelectionSort(arr+1,n-1);
}

int main()
{
    int arr[5] = {1,3,9,1,6};
    SelectionSort(arr,5);
    cout << "Sorted array : ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }           
    return 0;
}