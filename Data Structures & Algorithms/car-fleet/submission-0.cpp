class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> st;
        vector<pair<int,int>> cars(position.size());

        for(int i=0;i<position.size();i++){
            cars[i].first=position[i];
            cars[i].second=speed[i];
        }
        sort(cars.begin(), cars.end(), greater<pair<int, int>>());
        

        for(int i=0;i<position.size();i++){
            double time = (double)(target-cars[i].first)/cars[i].second;

            if(st.empty() || time>st.top()){
                st.push(time);
            }
        }

        return (int)st.size();
        
    }
};
