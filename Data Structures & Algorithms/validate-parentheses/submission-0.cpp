class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch == '('){
                st.push(')');
            }
            else if(ch == '{'){
                st.push('}');
            }
            else if(ch == '['){
                st.push(']');
            }else if(st.empty() || pop(st) != ch){
                return false;
            }
        }
        return st.empty();
    }
private:
    char pop(stack<char>& st){
        char c = st.top();
        st.pop();
        return c;
    }
};
