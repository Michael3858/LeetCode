class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int exp = 0;
        for(int i = columnTitle.length() - 1; i >= 0; i--){
            ans += (columnTitle[i] - 64) * pow(26, exp);
            exp++;
        }
        return ans;
    }
};