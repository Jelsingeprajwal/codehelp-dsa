// 56 leetcode
// 56. Merge Intervals

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for (auto interval : intervals)
        {
            if (ans.empty() || ans.back()[1] < interval[0])
            {
                ans.push_back(interval);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }
        return ans;
    }
};