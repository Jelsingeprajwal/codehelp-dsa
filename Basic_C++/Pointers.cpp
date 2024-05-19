#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 5, 7, 6};
    cout << "The address of first element of array: " << arr << endl;
    cout << "The <<arr[0]<< is stored at address " << &arr[0] << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *arr + 3 << endl;
    cout << *arr << endl;
    cout << *(arr + 2) << endl;
    // Array vs pointers
    int temp[10];
    int *ptr = &temp[0];
    cout << sizeof(temp) << endl;
    cout << sizeof(ptr) << endl;
    return 0;
}