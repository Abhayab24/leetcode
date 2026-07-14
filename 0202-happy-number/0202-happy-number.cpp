class Solution {
public:
int sqr(int n){
    int sum=0;
    int dig;
    while(n>0){
            dig=n%10;
            sum+=pow(dig,2);
            n/=10;
        }
    return sum;
}
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
    do{
        slow=sqr(slow);
        fast=sqr(sqr(fast));
    }while(slow!=fast);
        
    return slow==1;
    }
};