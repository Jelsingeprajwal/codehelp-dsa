// Array Intersection Lecture 10

/**
 * ! brute force TLE
 * **/
// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     // Write your code here.
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         int element = arr1[i];
//         for (int j = 0; j < m; j++)
//         {
//             if (element == arr2[j])
//             {
//                 ans.push_back(element);
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }
//     return ans;
// }
/**
 * * Optimized approach
 **/
// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     // Write your code here.
//     int i = 0, j = 0;
//     vector<int> ans;
//     while (i < n && j < m)
//     {
//         if (arr1[i] == arr2[j])
//         {
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
//     return ans;
// }