class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0,temp;
       long long int original=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            temp=x%10;
            rev=rev*10+temp;
            x/=10;
            
        }
        if(rev==original)
        {
            return true;

        }
            return false;
    }
    
};
