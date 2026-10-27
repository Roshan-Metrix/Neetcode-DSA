class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int n : nums){
            if(seen.count(n)){
                return true;
            }
            seen.insert(n);
        }
        return false;
    }
};