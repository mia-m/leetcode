class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int len = digits.size();
        int carry = 0;
        
        for (int i = len-1; i >= 0; i--) {
            if ((digits[i] + 1) < 10) {
                digits[i] += 1;
                return digits;
            } else {
                digits[i] = 0;
                carry = 1;
            }
        }
        // carry 1 at MSB
        vector<int>::iterator it;
        it = digits.begin();
        digits.insert(it, 1);
        
        return digits;
    }
};
