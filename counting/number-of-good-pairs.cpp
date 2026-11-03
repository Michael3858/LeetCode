class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        /*int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;*/
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }
        int count = 0;
        for(auto n : freq){
            int c = n.second;
            count += c * (c - 1) / 2;
        }
        return count;
    }
};