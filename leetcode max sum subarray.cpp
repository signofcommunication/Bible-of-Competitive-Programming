// greedy approach

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        long long ans = nums[1];
        int n = sizeof(nums) / sizeof(nums[0]);
        
        for(int i = 1; i <= n; i++) {
            sum += nums[i];
            
            if(sum > ans) {
                ans = sum;
            }
            
            if(sum < 0) {
                sum = 0;
            }
        }
        
        return ans;
    }
};
