// 231. Power of Two
#include <iostream>
#include <math.h>

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        for (int i = 0; i <= 30; i++)
        {
            if ((pow(2, i)) == n)
                return true;
        }
        return false;
    }
};