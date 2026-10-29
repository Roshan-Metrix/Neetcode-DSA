class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hashmap Method
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(mp.contains(complement)){
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
    }
};
