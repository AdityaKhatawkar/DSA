#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int mini;
    for(int i = 0; i < n-1; i++){
        mini = i;
        for(int j = i+1; j < n; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
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