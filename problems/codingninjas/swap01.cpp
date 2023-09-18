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
void sortOne(int arr[], int s)
{
    int i = 0, j = s - 1;
    while (i < j)
    {
        /* code */
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortOne(arr, 8);
    printArray(arr, 8);
    return 0;
}