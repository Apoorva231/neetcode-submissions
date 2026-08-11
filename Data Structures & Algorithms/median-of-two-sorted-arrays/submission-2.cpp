class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }

        int totalSize= nums1.size()+nums2.size();
        int half= (totalSize+1)/2;

        int lptr=0;
        int rptr=nums1.size();

        while(lptr<=rptr){
            int boundryNums1= (lptr+rptr)/2;
            int boundryNums2= half-boundryNums1;

            int left1= (boundryNums1 == 0) ? INT_MIN : nums1[boundryNums1-1];
            int left2= (boundryNums2 == 0) ? INT_MIN : nums2[boundryNums2-1];
            int right1=(boundryNums1 == nums1.size()) ? INT_MAX : nums1[boundryNums1];
            int right2=(boundryNums2 == nums2.size()) ? INT_MAX : nums2[boundryNums2];

            if(left1<=right2 and left2<=right1){
                double median=0.0;
                if(totalSize%2==0){
                    median = (max(left1,left2) + min(right1,right2))/2.0;
                    return median;
                }else{
                    median = max(left1,left2);
                    return median;

                }
            }else if(left1>right2){
                rptr= boundryNums1-1;

            }else{
                lptr= boundryNums1+1;

            }

        }
    }
};
