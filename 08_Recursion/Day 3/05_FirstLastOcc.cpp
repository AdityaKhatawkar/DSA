#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& arr, int s, int e){
    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int firstOcc(vector<int>& arr, int s, int e, int k) {
    print(arr,s,e);
    if (s > e) {
        return -1;
    }
    int mid = s + ((e - s) / 2);
    cout << "Mid value is: " << mid << endl;
    if (arr[mid] == k) {
        cout << "Potential answer found" << endl;
        int ans = firstOcc(arr, s, mid - 1, k);
        cout << "Answer is: " << ans << endl;
        return (ans == -1) ? mid : ans;
    } else if (arr[mid] > k) {
        cout << "Go left" << endl;
        return firstOcc(arr, s, mid - 1, k);
    } else {
        cout << "Go right" << endl;
        return firstOcc(arr, mid + 1, e, k);
    }
}

int lastOcc(vector<int>& arr, int s, int e, int k) {
    if (s > e) {
        return -1;
    }
    int mid = s + ((e - s) / 2);
    if (arr[mid] == k) {
        int ans = lastOcc(arr, mid + 1, e, k);
        return (ans == -1) ? mid : ans;
    } else if (arr[mid] > k) {
        return lastOcc(arr, s, mid - 1, k);
    } else {
        return lastOcc(arr, mid + 1, e, k);
    }
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int, int> ans;
    ans.first = firstOcc(arr, 0, n - 1, k);
    ans.second = lastOcc(arr, 0, n - 1, k);
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int n = arr.size();
    int k = 2;
    pair<int, int> result = firstAndLastPosition(arr, n, k);
    cout << "First occurrence: " << result.first << "\n";
    cout << "Last occurrence: " << result.second << "\n";
    return 0;
}