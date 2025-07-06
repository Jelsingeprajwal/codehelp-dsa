// l3cture 33- Linear search using recursion

#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int *arr, int size, int k)
{
    printArray(arr, size);
    // base case
    if (arr[0] == k)
    {
        return true;
    }
    if (size == 0)
    {
        return false;
    }
    // recursive case
    return linearSearch(arr + 1, size - 1, k);
}

int main()
{
    int arr[5] = {2, 4, 6, 7, 9};
    int size = 5;
    // cout << linearSearch(arr, 5, 7);
    linearSearch(arr, 5, 91) ? cout << "Present" : cout << "Not present";
    return 0;
}