class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Check if mid is a peak element
            if (nums[mid] > nums[mid + 1]) {
                // Move towards the left side
                high = mid;
            } else {
                // Move towards the right side
                low = mid + 1;
            }
        }
        
        // At the end of the loop, low == high and it is the peak element
        return low;
    }
};
