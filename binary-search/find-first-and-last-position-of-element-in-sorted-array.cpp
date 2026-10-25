class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                int n1 = mid;
                while(nums[n1] == target){
                    n1--;
                    if(n1 < 0){
                        break;
                    }
                }
                n1++;
                ans.push_back(n1);
                int n2 = mid;
                while(nums[n2] == target){
                    n2++;
                    if(n2 >= nums.size()){
                        break;
                    }
                }
                n2--;
                ans.push_back(n2);
                break;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};