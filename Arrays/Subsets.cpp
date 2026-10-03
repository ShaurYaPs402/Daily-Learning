class Solution {
    void printSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
        if (i == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        printSubsets(nums, ans, i + 1, allSubsets);

        ans.pop_back();
        printSubsets(nums, ans, i + 1, allSubsets);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        printSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};
