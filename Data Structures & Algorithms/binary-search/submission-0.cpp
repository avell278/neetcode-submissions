class Solution {
public:
    int search(vector<int>& nums, int target) {
        return helper(nums, target, 0, nums.size() - 1);
    }

    int helper(vector<int>& nums, int target, int low, int high) {
        if (low > high) {
            return -1; 
        }
        int mid = (high + low) / 2;
        if (nums[mid] > target) {
            return helper (nums, target, low, mid -1 );
        } else if (nums[mid] < target) {
            return helper (nums, target, mid + 1, high);
        } else if (nums[mid] == target) {
            return mid;
        }
    }


};
