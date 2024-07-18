#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++){
        //for round 1 to n-1
        for(int j = 0; j < n-1-i; j++){ //n-i-1 because the size of unsorted part of the array is decreasing from the end of the array.
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void bubbleSortOptimized(int arr[], int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
    
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}

int main()
{
    int arr[5] = {1,3,9,1,6};
    BubbleSort(arr,5);
    cout << "Sorted array : ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }           
    return 0;
}