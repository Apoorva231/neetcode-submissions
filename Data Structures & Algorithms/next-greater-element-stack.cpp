#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ans[n];
    stack<int> st;
    string s="";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=n-1;i>=0;i--){
       
        
        while(!st.empty() && arr[i]>=st.top()){
            st.pop();
        }
        
        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }
        
        st.push(arr[i]);
    }
    
    bool first= true;
    for(int i=0;i<n;i++){
        if(ans[i]==-1){
            if(first){
                cout<<"X";
                first=false;
            }else{
                cout<<" X";
            }
            
        }
        else{
            if(first){
                cout<<ans[i];
                first=false;
            }else{
                cout<<" "<<ans[i];
            }
            
        }
    }
    
    

    return 0;
}
