class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        set<vector<int>> set;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int a = 0; a < n - 3; a++){
            for(int b = a + 1; b < n - 2; b++){
                int c = b + 1, d = n - 1;
                while(c < d){
                    long long sum = (long long)nums[a] + nums[b] + nums[c] + nums[d];
                    if(sum == target){
                        set.insert({nums[a], nums[b], nums[c], nums[d]});
                        c++;
                        d--;
                    }
                    else if(sum < target){
                        c++;
                    }
                    else{
                        d--;
                    }
                }
            }
        }
        for(auto s : set){
            res.push_back(s);
        }
        return res;
    }
};