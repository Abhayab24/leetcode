class Solution {
public:
int reverse(int n){
    int rev=0;
    while(n>0){
    int temp=n;
    temp=n%10;
    rev=rev*10+temp;
    n/=10;
    }
    return rev;
}
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};