class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        for(int i = 0; i < prices.size(); i++){
            int mxPr = 0;
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[i] < prices[j]){
                    mxPr = max(mxPr, prices[j] - prices[i]);
                }
            }
            mx = max(mx, mxPr);
        }
        return mx;
    }
};
