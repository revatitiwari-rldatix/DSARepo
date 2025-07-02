class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum1=nums[0], max1=nums[0];

        for(int i=1; i<nums.size(); i++) {
            if(sum1<0) { sum1 =0; }

            sum1+= nums[i];
            max1 = max(max1, sum1);
        }
        return max1;
    }
};