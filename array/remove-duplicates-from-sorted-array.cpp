class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> vec;
        vec.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                vec.push_back(nums[i]);
            }
        }
        nums.clear();
        nums = vec;
        return nums.size();
    }
};