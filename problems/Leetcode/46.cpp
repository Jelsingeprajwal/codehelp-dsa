// Lecture 39
// 46. Permutations
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

class Solution
{

    void solve(vector<int> nums, vector<vector<int>> &ans, int index)
    {
        // base case
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            // backtrack
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};