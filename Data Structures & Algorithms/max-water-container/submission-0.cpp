class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max=0;

        for(int i=0;i<heights.size()-1;i++){
            for(int j=1;j<heights.size();j++){
                int area=(j-i)*min(heights[i],heights[j]);
                if(area>max){
                    max=area;
                }

            }
        }

        return max;
    }
};
