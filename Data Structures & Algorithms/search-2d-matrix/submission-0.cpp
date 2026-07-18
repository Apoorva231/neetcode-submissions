class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lptr=0;
        int rptr= matrix.size()*matrix[0].size()-1;
        int colSize=matrix[0].size();

        while(lptr<=rptr){
            int mid = (lptr+rptr)/2;

            int row= mid/colSize;
            int col= mid%colSize;

            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                lptr=mid+1;
            }else{
                rptr=mid-1;
            }


        }

        return false;
        
    }
};
