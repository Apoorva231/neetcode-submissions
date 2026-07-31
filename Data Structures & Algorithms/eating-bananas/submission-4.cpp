class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>maxPile) maxPile=piles[i];
        }

        int ans=maxPile;
        int lptr=1;
        int rptr=maxPile;
        while(lptr<=rptr){
            int mid = (lptr+rptr)/2;
            int totalTime=0;
            for(int j=0;j<piles.size();j++){
                totalTime += (piles[j] + mid - 1LL)/mid;

            }
            if(totalTime<=h){
                ans=mid;
                rptr=mid-1;
            }else{
                lptr=mid+1;
                
            }
        }

        

        return ans;
        
    }
};
