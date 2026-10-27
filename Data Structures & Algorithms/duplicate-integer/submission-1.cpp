class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            if(mp.contains(nums[i])){
                mp[nums[i]]++;
                continue;
            }
            mp[nums[i]] = 1;
        }
        for(auto p : mp){
            if(p.second > 1){
                return true;
            }
        }
        return false;
    }
};