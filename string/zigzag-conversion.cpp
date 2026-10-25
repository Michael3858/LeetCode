class Solution {
public:
    string convert(string s, int numRows) {
        string res;
        if(numRows == 1){
            return s;
        }
        for(int i = 0; i < numRows; i++){
            int j = i;
            while(j < s.length()){
                if(i == 0 || i == numRows - 1){
                    res += s[j];
                    j += (numRows - 1) * 2;
                }
                else{
                    res += s[j];
                    j += (numRows - i - 1) * 2;
                    if(j < s.length()){
                        res += s[j];
                        j += i * 2;
                    }
                }
            }
        }
        return res;
    }
};