class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> right_min(n);
        right_min[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; --i){
            right_min[i] = min(nums[i], right_min[i + 1]);
        }
        int left_max = nums[0];
        int block_start = 0;
        for(int i = 0; i < n; ++i){
            left_max = max(left_max, nums[i]);
            if(i == n - 1 || left_max <= right_min[i + 1]){
                for(int j = block_start; j <= i; ++j){
                    ans[j] = left_max;
                }
                block_start = i + 1;
                if(i < n - 1) left_max = nums[i + 1];
            }
        }
        return ans;
    }
};