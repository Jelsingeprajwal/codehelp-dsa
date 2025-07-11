// 228. Summary Ranges

// class Solution
// {
// public:
//     vector<string> summaryRanges(vector<int> &arr)
//     {
//         int n = arr.size(); // extracting size of the array
//         vector<string> ans; // declaring answer array to store our answer

//         string temp = ""; // temproray string that stores all possible answer

//         for (int i = 0; i < n; i++) // start traversing from the array
//         {
//             int j = i; // declare anthor pointer that will move

//             // run that pointer until our range is not break
//             while (j + 1 < n && arr[j + 1] == arr[j] + 1)
//             {
//                 j++;
//             }

//             // if j > i, that means we got our range more than one element
//             if (j > i)
//             {
//                 temp += to_string(arr[i]); // first store starting point
//                 temp += "->";              // then store arrow, as question wants it
//                 temp += to_string(arr[j]); // and lastly store the end point
//             }
//             else // we got only one element as range
//             {
//                 temp += to_string(arr[i]); // then store that element in temp
//             }

//             ans.push_back(temp); // push one possible answer string to our answer
//             temp = "";           // again reintiliaze temp for new possible answers
//             i = j;               // and move i to j for a fresh start
//         }

//         return ans; // and at last finally return the answer array
//     }
// };