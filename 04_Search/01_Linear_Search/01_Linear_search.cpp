#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key)
            return true;
    }
    return false;
}
       
int main()
{
    int arr[10] = {10,20,30,1,2,3,4,5,6,11};

    cout <<"Enter Key: "<< endl;
    int key;
    cin >> key;

    bool found = LinearSearch(arr,10,key);

    if(found){
        cout << "Key found!" << endl;
    }
    else {
        cout << "Key not found :(" << endl;
    }                
    return 0;
}