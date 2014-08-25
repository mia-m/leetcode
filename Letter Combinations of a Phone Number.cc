class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        
        vector<string> results;
        
        if (digits.length() < 1) {
            results.push_back("");
        } else {
            solve(digits, "", results);
        }
        
        return results;
        
    }
    
    void solve(string input, string solution, vector<string> &results) {
        
        map<char, string> phone;
        
        phone['0'] = " ";
        phone['1'] = "";
        phone['2'] = "abc";
        phone['3'] = "def";
        phone['4'] = "ghi";
        phone['5'] = "jkl";
        phone['6'] = "mno";
        phone['7'] = "pqrs";
        phone['8'] = "tuv";
        phone['9'] = "wxyz";
        
        char current = input[0];
        
        string choices = phone[current];
        int len = choices.length();
        
        for (int i = 0; i < len; i++) {
            if (input.length() > 1) {
                solve(input.substr(1, string::npos), solution + choices[i], results);
            } else {
                results.push_back(solution + choices[i]);
            }
        }
    }

};
