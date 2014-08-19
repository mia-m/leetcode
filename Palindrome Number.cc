class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        string s = ss.str();
        int len = s.length();
        int last = len - 1;
        for (int i = 0; i < len/2; i++) {
            if (s[i] != s[last-i]) {
                return false;
            }
        }
        return true;
    }
};
