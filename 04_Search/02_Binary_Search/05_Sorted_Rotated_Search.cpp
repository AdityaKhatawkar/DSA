// https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?leftPanelTabValue=PROBLEM

/*

#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {
    int start = s;
    int end = e;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k) {
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        // Binary search on the second part
        return binarySearch(arr, pivot, n - 1, k);
    } else {
        // Binary search on the first part
        return binarySearch(arr, 0, pivot - 1, k);
    }
}


*/