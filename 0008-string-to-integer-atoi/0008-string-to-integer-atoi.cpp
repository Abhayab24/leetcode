class Solution {
public:
    int myAtoi(string s) {
        if (s.size() == 0) return 0;
        int i = 0;
        int n = s.size();
        while (s[i] == ' ' && i < n) i++;
        bool positive = true;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            positive = (s[i] == '-') ? false : true;
            i++;
        }
        long long sum = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            sum = sum*10 + (int)(s[i] - '0');
            if (sum > INT_MAX) {
                if (positive) return INT_MAX;
                else return INT_MIN;
            }
            i++;
        }

        if (positive) return (int)sum;
        return (int)(-sum);
    }
};