class Solution {
public:
    int findMaxLeftGreaterIndex(int index, vector<int>& height){
        int leftMax=0;
        for(int i=1;i<index;i++){
            if(height[i]>height[leftMax]){
                leftMax=i;
            }
        }

        return leftMax;

    }
    int findMaxRightGreaterIndex(int index, vector<int>& height){

        int rightMax=index+1;
        for(int i=index+1;i<height.size();i++){
            if(height[i]>height[rightMax]){
                rightMax=i;
            }
        }

        return rightMax;

    }

    int trap(vector<int>& height) {
        int totalWater=0;

        for(int i=1;i<height.size()-1;i++){
            int current=0;
            int left= findMaxLeftGreaterIndex(i, height);
            int right= findMaxRightGreaterIndex(i, height);
            current= min(height[left],height[right])-height[i];
            if(current>0) totalWater+=current;
        }

        return totalWater;
    }
};
