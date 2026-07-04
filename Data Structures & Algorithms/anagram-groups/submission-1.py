class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        groups= {}
        strs.sort()

        check=False
        temp=""

        for s in strs:
            sorted_key=sorted(s)
            sorted_key=''.join(sorted_key)

            if sorted_key not in groups:
                groups[sorted_key]=[]
                groups[sorted_key].append(s)
            else:
                groups[sorted_key].append(s)


        
        values= groups.values()
        arrValues=list(values)
        return arrValues
                


        #read through the list
        #create hash buckets for values with same letters
        #read through each character of the word -- count and assign to appropriate bucket