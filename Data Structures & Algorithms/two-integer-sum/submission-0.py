class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seenNums={}

        indices=[]

        for i in range (0,len(nums)):
            if target-nums[i] in seenNums:
                indices.append(seenNums[target-nums[i]])
                indices.append(i)
            else:
                seenNums[nums[i]]=i


        return indices