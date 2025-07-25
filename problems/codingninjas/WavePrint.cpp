// Lecture 23 Print Like A Wave
//  Problem statement
//  For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

// For eg:-

// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].

#include <bits/stdc++.h>
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // Write your code here
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            // odd Index Bottom to top
            for (int row = nRows - 1; row >= 0; row--)
            {
                // cout<< arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // 0 and even index, top to bottom
            for (int row = 0; row < nRows; row++)
            {
                // cout<< arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}