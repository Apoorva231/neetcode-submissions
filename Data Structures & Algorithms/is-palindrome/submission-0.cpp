class Solution {
public:
    bool isPalindrome(string s) {

        int lptr=0;
        int rptr=s.size()-1;

        while(lptr<=rptr){
            if(!isalnum(s[lptr])){
                lptr++;
                continue;

            }else if(!isalnum(s[rptr])){
                rptr--;
                continue;

            }

            if(tolower(s[lptr])!=tolower(s[rptr])){
                return false;
            }

            lptr++;
            rptr--;
        }

        return true;
        
    }
};
