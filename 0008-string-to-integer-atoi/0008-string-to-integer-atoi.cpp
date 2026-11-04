class Solution {
public:
    int myAtoi(string s) {
        long long int integer = 0;
        int sign = 1;
        int i =0;

        while(i<s.size() && s[i]==' '){
            i++;
        }
        if(i<s.size() && (s[i]=='-')||s[i]=='+'){
            if(s[i]=='-')
            sign = -1;
           
            i++;
        }
        while(i < s.size() && isdigit(s[i])){
                int dig = s[i]-'0';

        if(integer > INT_MAX/10 || (integer==INT_MAX/10) && dig>(sign==1?7:8)){
            return sign==1?INT_MAX:INT_MIN;
        }integer = integer*10 + s[i]-'0';
        i++;
        }
        return sign*integer;
    }
};