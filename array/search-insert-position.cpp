class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(true){
            int mid = (left + right) / 2;
            if(target < nums[mid]){
                right = mid - 1;
            }
            else if(target > nums[mid]){
                left = mid + 1;
            }
            else{
                return mid;
            }
            if(right < left){
                if(target < nums[mid]){
                    return mid;
                }
                else if(target > nums[mid]){
                    return mid + 1;
                }
            }
        }
    }
};