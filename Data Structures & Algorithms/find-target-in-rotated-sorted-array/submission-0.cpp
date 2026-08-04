class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int lptr = 0;
        int rptr = nums.size() - 1;

        while (lptr <= rptr) {
            int mid = (lptr + rptr) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[lptr] <= nums[mid]) {
                if (nums[lptr] <= target and target < nums[mid]) {
                    rptr = mid-1;

                } else {
                    lptr = mid + 1;
                }
            }else {
                if (nums[mid] < target and target <= nums[rptr]) {
                    lptr = mid+1;

                } else {
                    rptr = mid - 1;
                }
            }
        }

        return -1;
    }
};
