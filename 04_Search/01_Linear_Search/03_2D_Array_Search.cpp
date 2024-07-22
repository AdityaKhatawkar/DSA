#include <iostream>
using namespace std;

bool LinearSearch(int arr[][4],int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {11, 48, 62, 14}};
    int key;
    cout << "Enter the key to find in array: " << endl;
    cin >> key;

    bool found = LinearSearch(arr, 3,4, key);

    if (found)
    {
        cout << "Key found!" << endl;
    }
    else
    {
        cout << "Key not found :(" << endl;
    }

    return 0;
}