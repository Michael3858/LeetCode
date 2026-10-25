class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string s1 = strs[0], s2 = strs[n - 1];
        for(int i = 0; i < min(s1.size(), s2.size()); i++){
            if(s1[i] == s2[i]){
                result += s1[i];
            }
            else{
                return result;
            }
        }
        return result;
    }
};