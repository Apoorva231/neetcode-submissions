class Solution {
public:
    int findMin(vector<int> &nums) {
        int lptr=0;
        int rptr=nums.size()-1;
        int ans= -1001;

        while(lptr<rptr){
            int mid = (lptr+rptr)/2;

            if(nums[mid]<nums[rptr]){
                rptr=mid;

            }else{
                lptr=mid+1;
            }
        }

        return nums[lptr];
        
    }
};
