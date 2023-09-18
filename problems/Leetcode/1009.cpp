// 1009. Complement of Base 10 Integer Lecture 7
#include <iostream>
using namespace std;
// step 1: find ~n eg if n=5 ie 00000.....0**101** ~n = 11111......1010
// step 2: create a mask with initial value 0 to ignore the 1s in ~n and consider last x values in binary of n
// step 3: calculate (~n)&mask to obtain the final value which will be the answer
// step4: create the mask value(which should look line 0000000.....01111)
// 	    initialize mask with 0 ie: 00000000000 in binary
// 	    do left shift and perform OR with 1 until n becomes 0

int main()
{
    int n;
    cin >> n;
    int m = n;
    if (n == 0)
    {
        return 1; // edge case when n = 0
    }

    int mask;
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;

    return 0;
}