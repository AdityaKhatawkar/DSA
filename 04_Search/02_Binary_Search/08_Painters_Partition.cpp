// https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557?leftPanelTabValue=PROBLEM



#include<vector>
#include<iostream>
using namespace std;


bool isPossible(vector<int> arr, int n, int k, int mid)
{
    int painters = 1;
    int board = 0;
    for(int i = 0; i < n; i++){
        if(board + arr[i] <= mid){
            board += arr[i];
        }
        else{
            painters++;
            if(arr[i] > mid || painters > k){
                return false;
            }
            board = arr[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> arr, int k)
{
    int s = 0;
    int sum = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    if(n < k){
        return ans;
    }

    int mid = s + (e-s)/2;
    while(s <= e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr = {10,20,30,40};
    int t = findLargestMinDistance(arr, 2);
    cout << t << endl;
    return 0;
}