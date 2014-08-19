class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (isalnum(s[i])) {
                t += tolower(s[i]);
            }
        }
        int len_t = t.length();
        int last = len_t - 1;
        for (int i = 0; i < len_t/2; i++) {
            if (t[i] != t[last-i]) {
                return false;
            }
        }
        return true;
    }
};
