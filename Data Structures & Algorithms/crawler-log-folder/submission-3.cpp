class Solution {
   public:
    int minOperations(vector<string>& logs) {
        // Iteration
        int depth = 0;
        for (auto& s : logs) {
            if (s == "./") {
                continue;
            }
            if (s == "../") {
                if (depth > 0) {
                    depth--;
                }
            } else {
                depth++;
            }
        }
        return depth;
    }
};