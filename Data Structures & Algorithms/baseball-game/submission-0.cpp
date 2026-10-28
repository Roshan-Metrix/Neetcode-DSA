class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto& op : operations){
            if(op == "+"){
                if(!st.empty()){
                    int a = st.top();
                    st.pop();

                    int b = st.top();
                    st.push(a);

                    st.push(a + b);
                }
            }else if(op == "C"){
                st.pop();
            }else if(op == "D"){
                int a = st.top();
                st.push(a * 2);
            }else{
                st.push(stoi(op));
            }
        }
        int ans = 0;
            while(!st.empty()){
            ans += st.top();
            st.pop();
            }
        return ans;
    }
};