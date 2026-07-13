class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;

        for(int num:nums){
            m[num]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto entry:m){
            int num=entry.first;
            int freq=entry.second;

            bucket[freq].push_back(num);
        }

        vector<int> res;

        for(int i=bucket.size()-1;i>=1;i--){
            if(res.size()==k){
                break;
            }
            for(int n:bucket[i]){
                res.push_back(n);

            }
        }

        return res;
    }
};
