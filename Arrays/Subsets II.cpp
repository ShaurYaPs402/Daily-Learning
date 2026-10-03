class Solution {
    void printSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
        if (i == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        printSubsets(nums, ans, i + 1, allSubsets);

        ans.pop_back();

        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[i]) {
            idx++;
        }

        printSubsets(nums, ans, idx, allSubsets);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allSubsets;
        vector<int> ans;
        printSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};
