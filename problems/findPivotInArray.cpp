// Lecture 14
//   [1,2,3,7,9] sorted array
// ip = [3,7,9,1,2] reverse of the above array.
//  op = pivot of the array ie 1 or min val in array 2

#include <iostream>
using namespace std;
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int findPivotInArray(int arr[], int n)
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

int main()
{
    int arr[] = {7, 9, 10, 12, 1, 3};
    cout << findPivotInArray(arr, 5);

    return 0;
}