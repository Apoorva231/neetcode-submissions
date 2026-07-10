class Solution {
public:
    bool isOperand(string s){
        return s=="+" || s=="-" || s=="*" || s=="/";
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i=0;i<tokens.size();i++){
            if(!isOperand(tokens[i])){
                st.push(tokens[i]);

            }else{
                int num1=stoi(st.top());
                st.pop();
                int num2=stoi(st.top());
                st.pop();
                int res;

                if(tokens[i]=="+"){
                    res=num1+num2;
                }else if(tokens[i]=="-"){
                    res= num2-num1;
                }else if(tokens[i]=="*"){
                    res= num1*num2;
                }else{
                    res= num2/num1;
                }

                st.push(to_string(res));
        
            }


        }

        int ans= stoi(st.top());

        return ans;
    }

    
};
