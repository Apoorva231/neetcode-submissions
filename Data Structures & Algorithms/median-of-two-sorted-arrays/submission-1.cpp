class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n;

        int lptr=0;
        int rptr=0;

        while(lptr<nums1.size() and rptr<nums2.size()){
            if(nums1[lptr]<=nums2[rptr]){
                n.push_back(nums1[lptr]);
                lptr++;
            }else{
                n.push_back(nums2[rptr]);
                rptr++;
            }
        }

        while(lptr<nums1.size()){
            n.push_back(nums1[lptr]);
            lptr++;
        }

        while(rptr<nums2.size()){
            n.push_back(nums2[rptr]);
            rptr++;
        }

        double ans=0;

        if(n.size()%2==0){
            ans= (double)(n[n.size()/2] + n[(n.size()-1)/2])/2;

        }else{
            ans= n[n.size()/2];

        }

        return ans;



        
    }
};
