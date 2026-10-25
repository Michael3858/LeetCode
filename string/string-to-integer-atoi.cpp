class Solution {
public:
    int myAtoi(string s) {
        bool readInt = false;
        bool negative = false;
        bool check = false;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 48 && s[i] <= 57){
                readInt = true;
            }
            if(readInt == false){
                if(s[i] == 45 && check == false){
                    negative = true;
                    check = true;
                }
                else if(s[i] == 43 && check == false){
                    negative = false;
                    check = true;
                }
                else if(s[i] == 32 && check == false){
                    continue;
                }
                else if(s[i] < 48 || s[i] > 57){
                    return 0;
                }
            }
            else{
                if(s[i] >= 48 && s[i] <= 57){
                    if(ans >= INT_MAX / 10){
                        if(ans == INT_MAX / 10 && s[i] < 55){
                            ans *= 10;
                            ans += s[i] - '0';
                        }
                        else{
                            return 2147483647;
                        }
                    }
                    else if(ans <= INT_MIN / 10){
                        if(ans == INT_MIN / 10 && s[i] < 56){
                            ans *= 10;
                            ans -= s[i] - '0';
                        }
                        else{
                            return -2147483648;
                        }
                    }
                    else{
                        ans *= 10;
                        if(negative == true){
                            ans -= s[i] - '0';
                        }   
                        else{
                            ans += s[i] - '0';
                        }
                    }
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};