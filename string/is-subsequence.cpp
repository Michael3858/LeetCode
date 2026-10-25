class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0, y = 0;
        if(s.length() == 0 && t.length() == 0) return true;
        while(y < t.length()){
            if(s[x] == t[y]) x++;
            if(x == s.length()) return true;
            y++;
        }
        return false;
    }
};