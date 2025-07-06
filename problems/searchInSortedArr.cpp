// Lecture 14

#include <vector>
#include <iostream>
using namespace std;

int findPivotInArray(vector<int> &arr, int n)
{
    // Find the pivot element
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s; // we can also return e
}

int binarySearch(vector<int> &arr, int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    // Write your code here.
    int pivot = findPivotInArray(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        // BS on second line
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        // BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }

    // Return the position of K in ARR else return -1.
}
