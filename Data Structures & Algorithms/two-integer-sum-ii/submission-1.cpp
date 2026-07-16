class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lptr=0;
        int rptr=numbers.size()-1;
        vector<int> vec;

        while(lptr<=rptr){
            if(numbers[lptr]+numbers[rptr]== target){
                vec.push_back(lptr+1);
                vec.push_back(rptr+1);
                return vec;
            }

            if(numbers[lptr]+numbers[rptr]>target){
                rptr--;
            }else{
                lptr++;
            }
        }

        return vec;
        
    }
};
