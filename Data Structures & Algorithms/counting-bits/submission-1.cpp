class Solution {
public:

    long long countSetBits(long long n){

        long long ctr=0;
        for(int i=0;i<32;i++){
            long long mask=1<<i;
            if(n&mask){
                ctr++;
            }
        }
        return ctr;

    }

    vector<int> countBits(int n) {
        vector<int> vec;

        vec.push_back(0);

        for(int i=1;i<=n;i++){
            long long bits= countSetBits(i);
            vec.push_back(bits);
        }

        return vec;


        
    }
};
