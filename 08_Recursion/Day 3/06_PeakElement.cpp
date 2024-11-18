// class Solution {
// private:
//     int binarySearch(vector<int>& arr, int s, int e){
//         int mid = s + ((e-s)/2);
//         if(s == e){
//             return s;
//         }
//         else if(arr[mid] < arr[mid+1]){
//             return binarySearch(arr,mid+1,e);
//         }
//         else{
//             return binarySearch(arr,s,mid); 
//         }
//     }

// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int e = arr.size() - 1;
//         return binarySearch(arr,0,e);
//     }
// };