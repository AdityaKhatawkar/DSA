#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    if(n <= 1){
        return;
    }
    InsertionSort(arr,n-1);
    int last = arr[n-1];
    int j = n-2;
    while(j > 0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}


int main()
{
    int arr[5] = {1,3,9,1,6};
    InsertionSort(arr,5);
    cout << "Sorted array : ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }           
    return 0;
}