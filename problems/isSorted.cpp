// Lecture 33
// is sorted? using recursion
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

bool isSorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, size - 1); // RC
}

int main()
{
    int arr[5] = {2, 4, 6, 7, 9};
    int size = 5;

    cout << isSorted(arr, size);

    return 0;
}