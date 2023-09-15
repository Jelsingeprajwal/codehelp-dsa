#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int i = 0, ans = 0;
    while (n != 0)
    {
        /* code */
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans; // arranges the binary value into reverse order
        n = n >> 1;                     // Right shift operator
        i++;
    }
    cout << "the ans is " << ans << endl;
    return 0;
}