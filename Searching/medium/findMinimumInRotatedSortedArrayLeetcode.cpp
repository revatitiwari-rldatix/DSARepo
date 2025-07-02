class Solution {
public:
    int findMin(vector<int>& nums) {
        int left =0; 
        int right = nums.size()-1;

        while(left< right) {
            int mid = left + (right-left)/2;
            if(left == right) {
                return nums[left];
            }

            if(nums[mid] <= nums[right]) {
                right = mid;
            } else {
                left = mid+1;
            }
        }

        return nums[left];
    }
};