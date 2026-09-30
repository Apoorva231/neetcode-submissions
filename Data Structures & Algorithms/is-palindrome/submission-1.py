class Solution:
    def isPalindrome(self, s: str) -> bool:
        newS=s.lower()
        lptr=0
        rptr= len(s)-1
        
        while lptr<=rptr:
            if not newS[lptr].isalnum():
                lptr+=1
                continue

            if not newS[rptr].isalnum():
                rptr-=1
                continue

            if newS[lptr]!=newS[rptr]:
                return False

            lptr+=1
            rptr-=1

        
        return True

        