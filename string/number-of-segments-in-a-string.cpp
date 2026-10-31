class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        if(s.length() == 0){
            return 0;
        }
        if(s[0] != ' '){
            count++;
        }
        for(int i = 1; i < s.length(); i++){
            if(s[i] != ' ' && s[i - 1] == ' '){
                count++;
            }  
        }
        return count;
    }
};