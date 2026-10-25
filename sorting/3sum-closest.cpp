class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans;
        int min = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            int j = i + 1, k = nums.size() - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum - target) < min){
                    min = abs(sum - target);
                    ans = sum;
                }
                if(sum - target >= 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};