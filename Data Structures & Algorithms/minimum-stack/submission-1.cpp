class MinStack {
    private:
    stack<pair<long long, long long>> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val, val});
        }else{
            st.push({val, min(val, getMin())});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        
        return st.top().first;
    }
    
    int getMin() {
        if(st.empty()){
            return -1;
        }

        return st.top().second;
    }
};
