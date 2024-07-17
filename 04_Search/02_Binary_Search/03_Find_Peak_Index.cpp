// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/


/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = arr.size();
        int i = 0;
        int j = s-1;
        int mid;
        while(i < j){
            mid = i + ((j-i)/2);
            if(arr[mid] < arr[mid + 1]){
                i = mid+1;
            }
            else{
                j = mid;
            }
        }
        return j;
    }
}; 
*/