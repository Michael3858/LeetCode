class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        for(int i = 30; i >= 0; i--){
            int m = pow(2, i);
            if(n - m >= 0){
                n -= m;
                count++;
            }
            if(n == 0){
                break;
            }
        }
        return count;
    }
};