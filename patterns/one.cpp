#include <iostream>
using namespace std;
/* pattern one */
// * * * *
// * * *
// * *
// *

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int col = 1;
        while (col <= n)
        {
            /* code */
            cout << col;
            col = col + 1;
        }
        cout << endl;
        n = n - 1;
    }

    return 0;
}