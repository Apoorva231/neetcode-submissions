class TimeMap {
private:
unordered_map<string, vector<pair<string,int>>> mp;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});

        
    }
    
    string get(string key, int timestamp) {

        int lptr=0;
        int rptr=mp[key].size()-1;
        int final=mp[key].size()-1;

        if(rptr==-1) return "";

        if(timestamp<mp[key][0].second) return "";

        while(lptr<=rptr){
            int mid=(lptr+rptr)/2;

            if(mp[key][mid].second==timestamp){
                return mp[key][mid].first;
            }

            if(mp[key][mid].second<timestamp){
                lptr=mid+1;

            }else{
                rptr=mid-1;

            }


        }

        return mp[key][rptr].first;
        
    }
};
