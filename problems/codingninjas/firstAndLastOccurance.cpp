// Lecture 13

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
int firstOccr(int arr[], int key, int n)
{
    int s = 0, e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1; // go to left
        }
        else if (arr[mid] < key)
        {
            // go to right
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccr(int arr[], int key, int n)
{
    int s = 0, e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1; // go to left
        }
        else if (arr[mid] < key)
        {
            // go to right
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 5};
    cout << "The first occurance of the key is " << firstOccr(arr, 3, 5) << endl;
    cout << "The last occurance of the key is " << lastOccr(arr, 3, 5);

    return 0;
}