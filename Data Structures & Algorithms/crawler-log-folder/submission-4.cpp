class Solution {
   public:
    int minOperations(vector<string>& logs) {
        // Stack
        stack<string> st;
        for (auto& s : logs) {
            if (s == "../") {
                if (!st.empty()) {
                    st.pop();
                }
            }else if(s != "./") {
                st.push(s);
            }
        }
        return st.size();
    }
};