// Lecture 13
// Peak index in Mountain array
// using binary search
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s = 0, e = arr.size() - 1;
//         int mid =  s + ((e-s)/2);

//         while(s<e){
//             if(arr[mid]< arr[mid+1]){
//                 s = mid + 1;
//             }
//             else{
//                 e = mid;
//             }
//             mid = s + ((e-s)/2);

//         }
//         return s;
//     }
// };