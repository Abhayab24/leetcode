class Solution {
public:
    int maxPower(string s) {
        int c=1;
        int m=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                c=1;
            }
            if(c>m){
                m=c;
            }
        }
        return m;
    }
};