class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};*/
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); i++){
            int n = target - nums[i];
            if(seen.count(n) == 1){
                return {seen[n], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};