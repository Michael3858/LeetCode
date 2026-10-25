class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] == val){
                int j = nums.size() - 1;
                swap(nums[i], nums[j]);
                nums.pop_back();
                if(nums.size() == 0 || nums.size() == i){
                    break;
                }
            }
        }
        return nums.size();
    }
};