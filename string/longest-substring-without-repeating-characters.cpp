class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;
        int left = 0, bestLength = 0;
        for(int right = 0; right < s.length(); right++){
            if(seen.count(s[right]) == 1 && seen[s[right]] >= left){
                left = seen[s[right]] + 1;
            }
            bestLength = max(bestLength, right - left + 1);
            seen[s[right]] = right;
        }
        return bestLength;
    }
};