class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int lptr = 0;
        int rptr = heights.size() - 1;

        int maxAreaFound = 0;

        while (lptr < rptr) {
            int area = (rptr - lptr) * min(heights[lptr], heights[rptr]);
            if (area > maxAreaFound) {
                maxAreaFound = area;
            }

            if(heights[lptr]<=heights[rptr]){
                lptr++;
            }else{
                rptr--;
            }
        }

        return maxAreaFound;
    }
};
