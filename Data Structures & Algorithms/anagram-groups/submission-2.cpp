class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;

        for(int i=0;i<strs.size();i++){
            vector<int> v (26,0);
            for (char c:strs[i]){
                v[c-'a']+=1;
            }

            string key="";
            for(int count:v){
                key+=to_string(count);
                key+="#";
            }
            
            m[key].push_back(strs[i]); 
        }

        vector<vector<string>> res;

        for(auto key:m){
            res.push_back(key.second);
        }

        return res;

        
    }
};
