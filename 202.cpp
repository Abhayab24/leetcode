#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        while(n>=1){
            int sum=0;
            while(n>0){
                int dig=n%10;
                sum+=dig*dig;
                n/=10;


            }
            n=sum;
            if(n==1){
                return true;
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    int n=2;
    cout<<s.isHappy(n);
}