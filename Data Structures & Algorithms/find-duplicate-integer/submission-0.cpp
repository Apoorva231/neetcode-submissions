class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int sptr=nums[nums[0]];
        int fptr= nums[nums[nums[0]]];

        while(sptr!=fptr){
            sptr=nums[sptr];
            fptr= nums[nums[fptr]];

        }

        sptr=nums[0];

        while (sptr!=fptr){
            sptr=nums[sptr];
            fptr=nums[fptr];

        }

        return sptr;
    }
};
