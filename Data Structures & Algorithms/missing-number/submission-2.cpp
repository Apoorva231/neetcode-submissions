class Solution {
   public:
    int missingNumber(vector<int>& nums) {
        int xor_range = 0;
        for (int i = 0; i < nums.size() + 1; i++) {
            xor_range ^= i;
        }

        int xor_actual = 0;
        for (int i = 0; i < nums.size(); i++) {
            xor_actual ^= nums[i];
        }

        return xor_range ^ xor_actual;


    }
};
