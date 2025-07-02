class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left =0, right= nums.size()-1;
        int index1= -1, index2 =-1;
        
        while(left <= right) {
            int mid = left + ((right-left)/2);
    
            if(nums[mid] == target) {
                index1 = mid;
                right = mid-1;
            }
            if(nums[mid] < target) {
                left = mid+1;
            } else {
                right = mid-1;
            }
        }

        if(index1 == -1) {
            return {-1, -1};
        }

        left = index1;
        right = nums.size()-1;
        while(left <= right) {
            int mid = left + ((right-left)/2);
    
            if(nums[mid] == target) {
                index2 = mid;
                left = mid+1; 
            }
            if(nums[mid] < target) {
                left = mid+1;
            } else {
                right = mid-1;
            }
        }

        return {index1, index2};
    }
};