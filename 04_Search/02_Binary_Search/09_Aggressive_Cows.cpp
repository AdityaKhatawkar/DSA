// https://www.naukri.com/code360/problems/aggressive-cows_1082559   

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


bool isPossible(vector<int> arr, int k, int mid)
{
    int cows = 1;
    int pos = arr[0];

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] - pos >= mid){
            cows++;
            if(cows == k){
                return true;
            }
            pos = arr[i];
        }
    }
    return false;
}




int aggressiveCows(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < arr.size(); i++){
        maxi = max(arr[i], maxi);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(isPossible(arr,k,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr = {4,2, 1, 3, 6};
    int t = aggressiveCows(arr, 2);
    cout << t << endl;
    return 0;
}