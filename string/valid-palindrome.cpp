class Solution {
public:
    bool isPalindrome(string s) {
        /*vector<char> c;
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 97 && s[i] <= 122){
                c.push_back(s[i]);
            }
            else if(s[i] >= 65 && s[i] <= 90){
                s[i] += 32;
                c.push_back(s[i]);
            }
            else if(s[i] >= 48 && s[i] <= 57){
                c.push_back(s[i]);
            }
        }
        for(int i = 0; i < c.size() / 2; i++){
            if(c[i] != c[c.size() - 1 - i]){
                return false;
            }
        }
        return true;*/
        string clean = "";
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                if(s[i] >= 65 && s[i] <= 90){
                    s[i] += 32;
                }
                clean += s[i];
            }
        }
        string clean2 = clean;
        reverse(clean2.begin(), clean2.end());
        if(clean == clean2){
            return true;
        }
        return false;
    }
};