class Solution {
public:
    void reverseWords(string &s) {
        vector<string> words;
        words = split(s);
        int len = words.size();
        int last = len - 1;
        for (int i = 0; i < len/2; i++) {
            string temp = words[i];
            words[i] = words[last - i];
            words[last - i] = temp;
        }
        s = "";
        for (int i = 0; i < len; i++) {
            if (i > 0) {
                s += " ";
            }
            s += words[i];
        }
    }
    
    vector<string> split(string s) {
        vector<string> result;
        istringstream iss(s);
        for (string buf; iss>>buf;) {
            result.push_back(buf);
        }
        return result;
    }
};
