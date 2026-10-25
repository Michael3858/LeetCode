class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        else{
            long long temp = x, reverse = 0;
            while(temp != 0){
                reverse = reverse * 10 + temp % 10;
                temp /= 10;
            }
            return (x == reverse);
        }
    }
};