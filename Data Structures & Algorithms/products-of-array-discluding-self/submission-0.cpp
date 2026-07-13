class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftProduct (nums.size());
        vector<int> rightProduct (nums.size());
        vector<int> res;

        leftProduct[0]=1;
        rightProduct[nums.size()-1]=1;
//1,1,2,8,
        for(int i=1;i<nums.size();i++){
            leftProduct[i]=nums[i-1]*leftProduct[i-1];

        }

        for(int i=nums.size()-2;i>=0;i--){
            rightProduct[i]= rightProduct[i+1]*nums[i+1];
        }

        res.push_back(rightProduct[0]);

        for(int i=1;i<nums.size()-1;i++){
            res.push_back(leftProduct[i]*rightProduct[i]);
        }
        res.push_back(leftProduct[nums.size()-1]);

        return res;

       

    }
};
