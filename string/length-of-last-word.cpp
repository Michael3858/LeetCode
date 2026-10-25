class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;
        while(i >= 0){
            if(s[i] != ' '){
                count++;
            }
            if(count > 0 && s[i] == ' '){
                break;
            }
            i--;
        }
        return count;
    }
};