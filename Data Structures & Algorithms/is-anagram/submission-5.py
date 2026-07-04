class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1={}
        s2={}
        
        for char in s:
            if char not in s1:
                s1[char]=1
            else:
                s1[char]+=1            

        for char in t:
            if char not in s2:
                s2[char]=1
            else:
                s2[char]+=1              

        for key in s1:
            if key not in s2 or s1[key]!=s2[key]:
                return False
        
        for key in s2:
            if key not in s1 or s2[key]!=s1[key]:
                return False
        
        return True