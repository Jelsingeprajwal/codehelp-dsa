// 7. Reverse Integer Lecture 7

#include <iostream>
#include <cstdint>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((reverse < INT32_MIN / 10) || (reverse > INT32_MAX / 10))
        // checks if the reverse value will be in range or not
        {
            return 0;
        }

        reverse = (reverse * 10) + digit;
        n = n / 10;
    }
    cout << reverse << endl;

    return 0;
}
