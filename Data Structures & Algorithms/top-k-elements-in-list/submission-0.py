class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        groups={}

        for num in nums:
            if num not in groups:
                groups[num]=1
            else:
                groups[num]+=1
            
        sorted_dict = {k: v for k, v in sorted(groups.items(), key=lambda item: item[1], reverse=True)}

        freqArr=[]
        
        counter=0
        for key in sorted_dict:
            if counter==k:
                break
            else:
                freqArr.append(key)   
                counter+=1          

        return freqArr