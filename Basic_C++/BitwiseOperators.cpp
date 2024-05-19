#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int b = 6;
    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a^b " << (a ^ b) << endl;
    int sum = 10;
    cout << sum++ << endl;
    cout << ++sum << endl;
    cout << sum-- << endl;
    cout << --sum << endl;

    return 0;
}