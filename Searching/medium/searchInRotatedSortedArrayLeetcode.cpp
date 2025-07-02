class Solution {
public:
    static int binarySearch(vector<int> nums, int start, int end, int target) {
          int ans = -1;
          while(start<= end) {
               int mid = start+ (end-start)/2;
               if (nums[mid] == target) {
                    return mid;
               } if(nums[mid]< target) {
                    start = mid+1;
               } else {
                    end = mid-1;
               }
          }

          return ans;
     }

     static int findPivot(vector<int> nums) {
          int  l=0, r=nums.size()-1;

          while(l<=r) {
               int mid= l + (r-l)/2;
               if(l==r) {
                    return l;
               } 
               if(mid+1 <= r && nums[mid] > nums[mid+1]) {
                    return mid;
               } else if(mid-1>=0 && nums[mid] < nums[mid-1]) {
                   return mid-1;
               } else if (nums[l] >= nums[mid]) {
                r = mid;
               }
               else {
                l = mid+1;
               }
          }
          return -1;
     }
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
          int n = nums.size()-1;
          int start = 0;
          int ans =-1;

          if(nums[0] <= target && target <= nums[pivot]) {
               ans = binarySearch(nums, 0, pivot, target);
          } else {
               ans = binarySearch(nums, pivot+1, n, target);
          }

          return ans;
    }
};