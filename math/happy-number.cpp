class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(set.find(n) == set.end()){
            set.insert(n);
            n = getNum(n);
            if(n == 1){
                return true;
            }
        }
        return false;
    }
    int getNum(int n){
        int res = 0;
        while(n > 0){
            res += (n % 10) * (n % 10);
            n /= 10;
        }
        return res;
    }
};