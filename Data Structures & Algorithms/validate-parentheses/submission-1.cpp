class Solution {
public:

    bool isOpening(char ch){
        return ch =='[' || ch =='(' || ch == '{';
    }

    bool isVal(char top, char ch){
        return top=='[' && ch == ']' || top=='(' && ch == ')' || top=='{' && ch == '}';

    }

    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(isOpening(s[i])){
                st.push(s[i]); 
            }else{
                if(st.empty()){
                    return false;
                }
                if(isVal(st.top(), s[i])){
                    st.pop();
                }else{
                    return false;
                }

            }
        }

        return st.empty();

        
    }
};
