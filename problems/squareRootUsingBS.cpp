// Lecture 14
// long long int binarySearch(int n){

//     int s = 0, e = n;
//     long long   int mid = s + (e-s)/2;
//     long long int ans = -1;
//     while(s<=e){
//         long long int square = mid*mid;
//         if(square == n) return mid;
//         else if (square > n) e = mid-1;
//         else{
//             ans = mid;
//             s=mid+1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int floorSqrt(int n)
// {
//     // Write your code here.
//     return binarySearch(n);
// }
