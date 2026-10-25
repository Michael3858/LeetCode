class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;*/
        unordered_set<int> seen;
        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i]) == 1) return true;
            seen.insert(nums[i]);
        }
        return false;
    }
};