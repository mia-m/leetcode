class Solution {
public:
    int romanToInt(string s) {
        map<string, int> roman;
        
        roman["I"]    = 1;
        roman["II"]   = 2;
        roman["III"]  = 3;
        roman["IV"]   = 4;
        roman["V"]    = 5;
        roman["VI"]   = 6;
        roman["VII"]  = 7;
        roman["VIII"] = 8;
        roman["IX"]   = 9;
        roman["X"]    = 10;
        roman["XX"]   = 20;
        roman["XXX"]  = 30;
        roman["XL"]   = 40;
        roman["L"]    = 50;
        roman["LX"]   = 60;
        roman["LXX"]  = 70;
        roman["LXXX"] = 80;
        roman["XC"]   = 90;
        roman["C"]    = 100;
        roman["CC"]   = 200;
        roman["CCC"]  = 300;
        roman["CD"]   = 400;
        roman["D"]    = 500;
        roman["DC"]   = 600;
        roman["DCC"]  = 700;
        roman["DCCC"] = 800;
        roman["CM"]   = 900;
        roman["M"]    = 1000;
        roman["MM"]   = 2000;
        roman["MMM"]  = 3000;
        
        int len = s.length();
        int result = 0;
        for (int i = 0; i < len; ) {
            string t1, t2, t3, t4;
            int val;
            int increment = 1;
            
            t1 = s[i];
            if ((i+1) < len) t2 = t1 + s[i+1];
            if ((i+2) < len) t3 = t2 + s[i+2];
            if ((i+3) < len) t4 = t3 + s[i+3];
            
            if (roman[t4] > 0 && roman[t4] < 4000) {
                val = roman[t4];
                increment = 4;
            } else if (roman[t3] > 0 && roman[t3] < 4000) {
                val = roman[t3];
                increment = 3;
            } else if (roman[t2] > 0 && roman[t2] < 4000) {
                val = roman[t2];
                increment = 2;
            } else if (roman[t1] > 0 && roman[t1] < 4000) {
                val = roman[t1];
                increment = 1;
            } 
            
            result += val;
            i += increment;
            
        }
        return result;
    }
};
