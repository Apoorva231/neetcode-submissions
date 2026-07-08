class Solution {
public:

    int hammingWeight(uint32_t n) {
        int ctr=0;
        for(int i=0;i<32;i++){
            int mask= 1<<i;
            
            if(n&mask){
                ctr++;

            }
        }

        return ctr;

    }
};
