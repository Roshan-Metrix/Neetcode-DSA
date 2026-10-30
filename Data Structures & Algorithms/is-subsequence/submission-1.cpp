class Solution {
   public:
    bool isSubsequence(string s, string t) {
        // DP (Bottom-Up)
        int n = s.length(), m = t.length();
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

        for (int i = 0; i <= m; ++i) {
            dp[n][i] = true;
        }

        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                if (s[i] == t[j]) {
                    dp[i][j] = dp[i + 1][j + 1];
                } else {
                    dp[i][j] = dp[i][j + 1];
                }
            }
        }
        return dp[0][0];
    }
};