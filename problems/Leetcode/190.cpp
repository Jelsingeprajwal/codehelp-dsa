// 190. Reverse Bits

// . Initialize an integer variable ans to store the reversed bits. This variable will be updated as we reverse the bits of the input number n.
// 2. Start a loop that runs 32 times (since we are dealing with a 32-bit unsigned integer).
// 3. Within each iteration of the loop, left shift ans by one position (i.e., ans <<= 1). This effectively makes space for the next bit to be added.
// 4. Perform a bitwise OR operation between ans and the least significant bit of n (i.e., n & 1). This operation sets the least significant bit of ans to the current bit of n, effectively reversing that bit.
// 5. Right shift n by one position (i.e., n >>= 1). This shifts the bits of n to the right, allowing us to access the next bit in the next iteration.
// 6. Repeat steps 3 to 5 for all 32 bits of the input number n.
// 7. After the loop completes, ans will contain the reversed bit code of the original number n.

// * optimal solution

// class Solution
// {
// public:
//     uint32_t reverseBits(uint32_t n)
//     {
//         int ans = 0;
//         for (int i = 0; i < 32; i++)
//         {
//             ans = ans << 1;
//             ans = ans | (n & 1);
//             n = n >> 1;
//         }
//         return ans;
//     }
// };