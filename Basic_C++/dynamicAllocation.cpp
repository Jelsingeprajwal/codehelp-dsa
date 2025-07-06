#include <iostream>
using namespace std;

void update(int n) // pass by value
{
    n++;
    cout << "Inside " << n << endl;
}
void update2(int &n) // pass by reference
{
    n++;
    cout << "Inside " << n << endl;
}

int main()
{
    // int i = 10;

    // // create referece variable
    // int &j = i;

    // cout << i << endl;
    // i++;

    // cout << i << endl;

    // j++;

    // cout << i << endl;
    // cout << j << endl;

    int n = 5;
    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;

        return 0;
}