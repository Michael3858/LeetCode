class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack("", 0, 0, n, res);
        return res;
    }
private:
    void backtrack(string s, int left, int right, int n, vector<string>& res){
        if(left == n && right == n){
            res.push_back(s);
        }
        else{
            if(left == right){
                backtrack(s + '(', left + 1, right, n, res);
            }
            else if(left > right){
                if(left != n){
                    backtrack(s + '(', left + 1, right, n, res);
                }
                backtrack(s + ')', left, right + 1, n, res);
            }
        }
    }
};