class MinStack {
    stack<int>st;
    stack<int>st2;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        st.push(val);

        if(!st2.empty()){
            st2.push(min(val,st2.top()));
        }else{
            st2.push(val);
        }
        
    }
    
    void pop() {
        st.pop();
        st2.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st2.top();
    }
};