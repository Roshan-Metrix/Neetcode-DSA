class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // Bruteforce 
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            int cnt = 0;
            for(int j = i; j < nums.size(); j++){
                if(nums[j] == 0) break;
                cnt++;
            }
            res = max(res, cnt);
        }
        return res;
    }
};