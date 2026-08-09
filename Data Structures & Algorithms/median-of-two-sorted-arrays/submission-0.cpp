class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n(nums1.size()+nums2.size());

        for(int i=0;i<nums1.size();i++){
            n[i]=nums1[i];
        }

        for(int i=0;i<nums2.size();i++){
            n[nums1.size()+i]=nums2[i];
        }

        sort(n.begin(),n.end());

        double ans=0;

        if(n.size()%2==0){
            ans= (double)(n[n.size()/2] + n[(n.size()-1)/2])/2;

        }else{
            ans= n[n.size()/2];

        }

        return ans;



        
    }
};
