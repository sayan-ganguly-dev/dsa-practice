// Platform: LeetCode/ qn no- 1
// Problem: Two Sum_Using Hash_map
// Date: 16-01-2026

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];
            if (mp.find(rem) != mp.end()) {
                ans.push_back(i);
                ans.push_back(mp[rem]);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
