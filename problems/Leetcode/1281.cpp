// 1281. Subtract the Product and Sum of Digits of an Integer

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0, prod = 1;
        int temp = n;
        while (temp > 0)
        {
            sum = sum + temp % 10;
            temp = temp / 10;
        }

        while (n > 0)
        {
            prod = prod * (n % 10);
            n = n / 10;
        }
        return prod - sum;
    }
};