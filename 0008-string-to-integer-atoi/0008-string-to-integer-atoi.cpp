class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long result = 0;

        // 1. Ignore leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // 2. Handle sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // 4. Handle overflow
            if (result * sign >= INT_MAX) return INT_MAX;
            if (result * sign <= INT_MIN) return INT_MIN;

            i++;
        }

        return result * sign;
    }
};

