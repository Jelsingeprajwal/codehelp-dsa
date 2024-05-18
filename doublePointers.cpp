#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    cout << *ptr << endl;
    cout << ptr << endl;
    int **ptr2 = &ptr;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl;

    return 0;
}
