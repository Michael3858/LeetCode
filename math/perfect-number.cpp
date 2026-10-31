class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        if(num == 1){
            return false;
        }
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
                sum += i;
                if(i != num / i){
                    sum += num / i;
                }
            }
        }
        return (sum + 1 == num);
    }
};