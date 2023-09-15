// Lecture 9
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "printing succesfull!" << endl;
}

// *********IMPORTANT********
void updateArray(int arr[], int size)
{
    cout << "printtin in the updateArray function:" << endl;
    arr[1] = 10000; // this changes the array value in the original array not in a copy of the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Entering the main function" << endl;
}
int main()
{
    int number[5];
    // cout << "garbage value" << number[0] << endl;
    int array[5] = {1, 3, 4, 5, 7};
    // printArray(array, 5);
    int zeroArr[10] = {0};
    // printArray(zeroArr, 10);
    // cout << (sizeof zeroArr) / sizeof(int); // size of array
    int newArray[3] = {0};
    updateArray(newArray, 3);
    printArray(newArray, 3);
    return 0;
}