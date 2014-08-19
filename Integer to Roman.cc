class Solution {
public:
    string intToRoman(int num) {
        map<int, string> roman;
        
        roman[0] = "";
        roman[1] = "I";
        roman[2] = "II";
        roman[3] = "III";
        roman[4] = "IV";
        roman[5] = "V";
        roman[6] = "VI";
        roman[7] = "VII";
        roman[8] = "VIII";
        roman[9] = "IX";
        roman[10] = "X";
        roman[20] = "XX";
        roman[30] = "XXX";
        roman[40] = "XL";
        roman[50] = "L";
        roman[60] = "LX";
        roman[70] = "LXX";
        roman[80] = "LXXX";
        roman[90] = "XC";
        roman[100] = "C";
        roman[200] = "CC";
        roman[300] = "CCC";
        roman[400] = "CD";
        roman[500] = "D";
        roman[600] = "DC";
        roman[700] = "DCC";
        roman[800] = "DCCC";
        roman[900] = "CM";
        roman[1000] = "M";
        roman[2000] = "MM";
        roman[3000] = "MMM";
        
        stringstream ss;
        ss << roman[(num / 1000) * 1000];
        ss << roman[((num % 1000) / 100) * 100];
        ss << roman[((num % 100)  / 10)  * 10];
        ss << roman[(num % 10)];
        
        return ss.str();
        
    }
};
