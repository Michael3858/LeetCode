class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int res = 0;
        int majority = 0;
        for(int n : nums){
            map[n]++;
            if(map[n] > majority){
                res = n;
                majority = map[n];
            }
        }
        return res;
    }
};