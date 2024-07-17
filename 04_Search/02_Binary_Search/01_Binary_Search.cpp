/*  Mid calculation using (i+j)/2 might throw an error when i+j exceeds the integer range. To optimize this, we can use 
    the formula mid = i + ((j-i)/2)
*/


#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int k)
{
    int i = 0;
    int j = n - 1;
    int mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (k == arr[mid])
        {
            return mid;
        }

        else if (k > arr[mid])
        {
            i = mid + 1;
        }

        else if (k < arr[mid])
        {
            j = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}; //Elements should be sorted.
    int k = 2;
    int index = Binary_Search(arr, 6, k);
    if (index != -1)
    {
        cout << "Key Found!! at index "<< index << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    return 0;
}