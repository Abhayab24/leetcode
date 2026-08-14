class Solution {
public:
    bool isBalanced(string num) {
        int sum1=0;
        int sum2=0;
        int idx=num.length();
        for(int i=0;i<num.length();i++){
            // if(i%2==0){
            sum1+=num[i]-'0';
            // }
            // else{
            if(i+1<num.length())
            sum2+=num[i+1]-'0';
            // }
            i=i+1;
        }
        if(sum1==sum2){
            return true;
        }
        return false;
    }
};