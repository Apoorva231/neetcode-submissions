class Solution {
public:
    int trap(vector<int>& height) {
        //build left array
        vector<int> leftArr(height.size());
        int maxSeenLeft=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>height[maxSeenLeft]){
                maxSeenLeft=i;
            }
            leftArr[i]=maxSeenLeft;

        }

        vector<int> rightArr(height.size());
        int maxSeenRight=height.size()-1;
        for(int i=height.size()-1;i>=0;i--){
            if(height[i]>height[maxSeenRight]){
                maxSeenRight=i;
            }
            rightArr[i]=maxSeenRight;

        }


        int totalWater=0;

        for(int i=1;i<height.size()-1;i++){
            int current=0;
            int left= leftArr[i];
            int right= rightArr[i];
            current= min(height[left],height[right])-height[i];
            if(current>0) totalWater+=current;
        }

        return totalWater;
    }
};
