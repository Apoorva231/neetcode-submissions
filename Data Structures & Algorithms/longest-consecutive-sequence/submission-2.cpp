class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        int longest = 0;

        for (int num : s) {
            if (s.find(num - 1) == s.end()) {
                int currentNum = num;
                int currentLength = 1;

                while (s.find(currentNum+1)!=s.end()) {
                    currentNum += 1;
                    currentLength += 1;
                }

                longest = max(longest, currentLength);

            } else {
                continue;
            }
        }

        return longest;
    }
};
