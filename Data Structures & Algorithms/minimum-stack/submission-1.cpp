// Using Stack
class MinStack {
public:
    stack<int> stk;
    MinStack() {

    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        int MinVal = INT_MAX;
        stack<int> temp = stk;
        while(!temp.empty()){
            int a = temp.top();
            MinVal = min(a, MinVal);
            temp.pop();
        }
        return MinVal;
    }
};
