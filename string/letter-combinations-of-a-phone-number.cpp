class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        string map[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        backtrack("", digits, map, res);
        return res;
    }
private:
    void backtrack(string s, string next, string map[], vector<string>& res){
        if(next.empty()){
            res.push_back(s);
        }
        else{
            string letters = map[next[0] - '2'];
            for(char letter : letters){
                backtrack(s + letter, next.substr(1), map, res);
            }
        }
    }
};