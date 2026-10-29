class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // One pass
        int res = 0, cnt = 0;
        for(int n : nums){
            if(n == 0){
                res = max(res, cnt);
                cnt = 0;
            }else{
                cnt++;
            }
        }
        return max(res, cnt);
    }
};