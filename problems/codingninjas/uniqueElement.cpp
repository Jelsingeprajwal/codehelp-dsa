// Lecture 10 : Unique Number in array Coding Ninjas
#include <iostream>
using namespace std;

// optimized solution
int findUnique(int *arr, int size)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    printArray(arr, 7);
    cout << findUnique(arr, 7) << endl;

    return 0;
}